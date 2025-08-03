/*
==============================================================================================================
	@file: main.c
	@author: Mohammed Tarabay
	@abstract: Calculate Power Using Recursion
==============================================================================================================
*/


#include <stdio.h>

long long power(int base, int exponent) {
    if (exponent == 0) return 1;
    return base * power(base, exponent - 1);
}

int main() {
    int base_num, exp_num;
    printf("Enter base number: ");
    fflush(stdout);  // Ensure prompt is displayed
    scanf("%d", &base_num);
    fflush(stdin);

    printf("Enter power number(positive integer): ");
    fflush(stdout);  // Ensure prompt is displayed
    scanf("%d", &exp_num);
    fflush(stdin);

    printf("%d^%d = %lld\n", base_num, exp_num, power(base_num, exp_num));
    return 0;
}
