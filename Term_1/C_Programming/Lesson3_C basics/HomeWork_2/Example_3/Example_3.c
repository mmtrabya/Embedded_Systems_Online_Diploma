/*
==============================================================================================================
	@file: Example_3.c
	@author: Mohammed Tarabay
	@abstract: Checks the Largest of three numbers
==============================================================================================================
*/


#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three numbers: ");
    fflush(stdout);
    scanf("%d %d %d", &num1, &num2, &num3);
    fflush(stdin);

    // Find the largest number
    int largest;
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Print the result
    printf("The largest number is: %d\n", largest);
    fflush(stdout);

    return 0;
}
