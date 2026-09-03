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

    printf("Enter two integers:");
    scanf("%lf %lf", &num1, &num2);

    double sum = add(num1, num2);
    printf("By addition, %lf + %lf = %lf\n", num1, num2, sum);

    double difference = subtract(num1, num2);
    printf("By subtraction, %lf - %lf = %lf\n", num1, num2, difference);

    double product = multiply(num1, num2);
    printf("By multiplication, %lf * %lf = %lf\n", num1, num2, product);

    double quotient = divide(num1, num2);
    printf("By division, %lf / %lf = %lf\n", num1, num2, quotient);

    return 0;
}