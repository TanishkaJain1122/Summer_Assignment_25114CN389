//Write a Program to move zeroes to end
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeroes
    while (count < n) {
        arr[count++] = 0;
    }

    printf("Array after moving zeroes to the end:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}