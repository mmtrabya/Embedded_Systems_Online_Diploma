/*
==============================================================================================================
	@file: Example_4.c
	@author: Mohammed Tarabay
	@abstract: Checks if Number input by user is Negative or Positive or zero
==============================================================================================================
*/

#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &number);
    fflush(stdin);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number.\n", number);
        fflush(stdout);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
        fflush(stdout);
    } else {
        printf("%d is zero.\n", number);
        fflush(stdout);
    }

    return 0;
}
