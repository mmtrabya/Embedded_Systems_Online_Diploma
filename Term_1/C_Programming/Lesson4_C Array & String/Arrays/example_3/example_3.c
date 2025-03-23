/*
==============================================================================================================
	@file: example_3.c
	@author: Mohammed Tarabay
	@abstract: Transpose of a matrix
==============================================================================================================
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Asking user for matrix size
    printf("Enter the number of rows and columns: ");
    fflush(stdout);
    scanf("%d %d", &rows, &cols);
    fflush(stdin);

    // Declare matrix and transpose matrix
    float matrix[rows][cols], transpose[cols][rows];

    // Taking input for matrix elements
    printf("Enter the elements of the matrix:\n");
    fflush(stdout);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            fflush(stdout);
            scanf("%f", &matrix[i][j]);
            fflush(stdin);
        }
    }

    // Computing the transpose
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];  // Swap elements
        }
    }

    // Displaying the original matrix
    printf("\nOriginal Matrix:\n");
    fflush(stdout);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.1f\t", matrix[i][j]);
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);
    }

    // Displaying the transpose matrix
    printf("\nTranspose Matrix:\n");
    fflush(stdout);
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%.1f\t", transpose[i][j]);
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);
    }

    return 0;
}

