/*
==============================================================================================================
	@file: Example_8.c
	@author: Mohammed Tarabay
	@abstract: A simple Calculator using Switch Case
==============================================================================================================
*/


#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    double result;

    // Prompt user for input
    printf("Enter an operator (+, -, *, /): ");
    fflush(stdout);
    scanf(" %c", &operator);
    fflush(stdin);

    printf("Enter two operands: ");
    fflush(stdout);
    scanf("%lf %lf", &num1, &num2);
    fflush(stdin);

    // Perform the appropriate calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }
    fflush(stdout);

    return 0;
}
