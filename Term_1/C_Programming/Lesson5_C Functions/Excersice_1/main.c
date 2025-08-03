/*
==============================================================================================================
	@file: main.c
	@author: Mohammed Tarabay
	@abstract: Prime Number between two intervals defined by user
==============================================================================================================
*/


#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int low, high;
    printf("Enter two numbers(intervals): ");
    fflush(stdout);  // Ensure prompt is displayed
    scanf("%d %d", &low, &high);
    fflush(stdin);
    printf("Prime numbers between %d and %d are: ", low, high);
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
