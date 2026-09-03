#include <stdio.h>

double add (double a, double b) {
    return (a + b);
}

double subtract (double a, double b) {
    return (a - b);
}

double multiply (double a, double b) {
    return (a * b);
}

double divide (double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return (a / b);
}

int main() {
    double num1, num2;
    char operator;

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

    else if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error: Invalid operator. Please use +, -, *, or /.\n");
    }

    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid input! You must enter numbers, not characters.\n");
        return 1;
    }

    return 0;
}