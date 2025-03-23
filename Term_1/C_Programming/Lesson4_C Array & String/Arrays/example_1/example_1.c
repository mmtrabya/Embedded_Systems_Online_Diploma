/*
==============================================================================================================
	@file: example_1.c
	@author: Mohammed Tarabay
	@abstract: Matrix 2x2 summation
==============================================================================================================
*/

#include <stdio.h>

int main() {
    float a[2][2], b[2][2], sum[2][2];
    int i, j;

    // Input for first matrix
    printf("Enter the elements of 1st matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter a%d%d: ", i+1, j+1);
            fflush(stdout); // Flush output buffer
            scanf("%f", &a[i][j]);
            fflush(stdin); // Flush input buffer
            while (getchar() != '\n'); // Clear input buffer
        }
    }

    // Input for second matrix
    printf("Enter the elements of 2nd matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Enter b%d%d: ", i+1, j+1);
            fflush(stdout); // Flush output buffer
            scanf("%f", &b[i][j]);
            fflush(stdin); // Flush input buffer
            while (getchar() != '\n'); // Clear input buffer
        }
    }

    // Computing the sum of matrices
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the sum matrix
    printf("Sum Of Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%.1f\n", sum[i][j]);
            fflush(stdout); // Flush output buffer for immediate output
        }
    }

    return 0;
}
