/*
==============================================================================================================
	@file: example_7.c
	@author: Mohammed Tarabay
	@abstract: swap numbers entered by user (without temp variable)
==============================================================================================================
 */

#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two numbers
    printf("Enter first number: ");
    fflush(stdout);
    scanf("%d", &a);
    fflush(stdin);
    printf("Enter second number: ");
    fflush(stdout);
    scanf("%d", &b);
    fflush(stdin);

    printf("Before swapping: a = %d, b = %d\n", a, b); // Print the numbers before swapping

    // Swap the numbers without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b); // Print the numbers after swapping

    return 0;
}
