#include <stdio.h>

double add (double a, double b) {
    return (a + b);
}

int main() {
    double num1, num2;

    printf("Enter two integers:");
    scanf("%lf %lf", &num1, &num2);

    double sum = num1 + num2;

    printf("By addition, %lf + %lf = %lf\n", num1, num2, sum);
    return 0;
}