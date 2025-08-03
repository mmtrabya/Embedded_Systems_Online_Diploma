/*
==============================================================================================================
	@file: main.c
	@author: Mohammed Tarabay
	@abstract: Calculate Factorial Using Recursion
==============================================================================================================
*/


#include <stdio.h>

long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    fflush(stdout);  // Ensure prompt is displayed
    scanf("%d", &num);
    fflush(stdin);
    printf("Factorial of %d = %lld\n", num, factorial(num));
    fflush(stdout);
    return 0;
}
