/*
==============================================================================================================
	@file: Example_7.c
	@author: Mohammed Tarabay
	@abstract: Calculate The Factorial of a Number
==============================================================================================================
*/


#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    fflush(stdout);
    scanf("%d", &n);
    fflush(stdin);

    // Check if the input is negative
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        fflush(stdout);
    } else {
        // Calculate factorial
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d = %llu\n", n, factorial);
        fflush(stdout);
    }

    return 0;
}
