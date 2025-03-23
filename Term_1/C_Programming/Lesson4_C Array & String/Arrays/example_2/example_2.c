/*
==============================================================================================================
	@file: example_2.c
	@author: Mohammed Tarabay
	@abstract: Calculation of Average of elements inside Array
==============================================================================================================
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Taking the number of elements as input
    printf("Enter the number of elements: ");
    fflush(stdout);
    scanf("%d", &n);
    fflush(stdin);

    float numbers[n]; // Declaring an array of size n

    // Taking array input from the user
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        fflush(stdout);
        scanf("%f", &numbers[i]);
        fflush(stdin);
        sum += numbers[i]; // Adding elements to sum
    }

    // Calculating average
    average = sum / n;

    // Displaying result
    printf("The average is: %.2f\n", average);
    fflush(stdout);

    return 0;
}
