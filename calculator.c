#include <stdio.h>

// This function will perform addition of two numbers
double add (double a, double b) {
    return (a + b);
}

// This function will perform subtraction of two numbers
double subtract (double a, double b) {
    return (a - b);
}

// This function will perform multiplication of two numbers
double multiply (double a, double b) {
    return (a * b);
}

// This function will perform division of two numbers, but will throw an error if the second number is zero
double divide (double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (a / b);
}

// This function will take two numbers and an operator as input, and will call the appropriate function to perform the operation
int main() {
    double num1, num2;
    char operator;

    // Takes user input for two numbers and an operator; throws an error if the input is invalid (non-numeric characters)
    printf("Enter two integers and an operator (+, -, *, /): ");
    if (scanf("%lf %lf %c", &num1, &num2, &operator) != 3) {
        printf("Error: Invalid input! You must enter numbers followed by an operator.\n");
        return 1;
    }

    if (operator == '+') {
        double sum = add(num1, num2);
        printf("By addition, %lf + %lf = %lf\n", num1, num2, sum);
    }

    else if (operator == '-') {
        double difference = subtract(num1, num2);
        printf("By subtraction, %lf - %lf = %lf\n", num1, num2, difference);
    }

    else if (operator == '*') {
        double product = multiply(num1, num2);
        printf("By multiplication, %lf * %lf = %lf\n", num1, num2, product);
    }

    else if (operator == '/') {
        double quotient = divide(num1, num2);
        printf("By division, %lf / %lf = %lf\n", num1, num2, quotient);
    }

    // Error handling for invalid operators
    else if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    return 0;
}