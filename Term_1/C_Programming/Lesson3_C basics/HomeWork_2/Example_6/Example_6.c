/*
==============================================================================================================
	@file: Example_6.c
	@author: Mohammed Tarabay
	@abstract: Calculate The Sum of Natural Numbers
==============================================================================================================
*/


#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer: ");
    fflush(stdout);
    scanf("%d", &n);
    fflush(stdin);

    // Calculate the sum of natural numbers
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Print the result
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);
    fflush(stdout);

    return 0;
}
