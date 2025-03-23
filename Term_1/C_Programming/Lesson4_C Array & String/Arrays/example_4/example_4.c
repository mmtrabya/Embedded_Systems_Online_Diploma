/*
==============================================================================================================
	@file: example_4.c
	@author: Mohammed Tarabay
	@abstract: Adding element to Array
==============================================================================================================
*/

#include <stdio.h>

int main() {
    int n, i, element, position;

    // Taking input for the number of elements
    printf("Enter no of elements: ");
    fflush(stdout);
    scanf("%d", &n);
    fflush(stdin);

    int arr[n + 1]; // Array with extra space for new element

    // Taking input for the array elements
    printf("Enter the elements: ");
    fflush(stdout);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        fflush(stdin);
    }

    // Taking input for the element to be inserted
    printf("Enter the element to be inserted: ");
    fflush(stdout);
    scanf("%d", &element);
    fflush(stdin);

    // Taking input for the position (1-based index)
    printf("Enter the location: ");
    fflush(stdout);
    scanf("%d", &position);
    fflush(stdin);

    // Shifting elements to make space for new element
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position - 1] = element;

    // Printing the updated array
    printf("Updated Array: ");
    fflush(stdout);
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
        fflush(stdout);
    }
    printf("\n");
    fflush(stdout);

    return 0;
}

