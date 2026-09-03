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

int main() {
    double num1, num2;

    printf("Enter two integers:");
    scanf("%lf %lf", &num1, &num2);

    double sum = num1 + num2;
    printf("By addition, %lf + %lf = %lf\n", num1, num2, sum);

    double difference = (num1 - num2);
    printf("By subtraction, %lf - %lf = %lf\n", num1, num2, difference);

    double product = (num1 * num2);
    printf("By multiplication, %lf * %lf = %lf\n", num1, num2, product);

    return 0;
}