/*
==============================================================================================================
	@file: example_5.c
	@author: Mohammed Tarabay
	@abstract: Adding element to Array
==============================================================================================================
*/

#include <stdio.h>

int main() {
    int n, i, searchElement, found = 0;

    // Taking input for the number of elements
    printf("Enter no of elements: ");
    fflush(stdout);
    scanf("%d", &n);
    fflush(stdin);

    int arr[n]; // Declaring array

    // Taking input for the array elements
    printf("Enter the elements: ");
    fflush(stdout);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        fflush(stdin);
    }

    // Taking input for the element to be searched
    printf("Enter the element to be searched: ");
    fflush(stdout);
    scanf("%d", &searchElement);
    fflush(stdin);

    // Searching for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Number found at the location = %d\n", i + 1); // 1-based index
            fflush(stdout);
            found = 1;
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Number not found in the array.\n");
        fflush(stdout);
    }

    return 0;
}

