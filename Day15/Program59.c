//Write a program to rotate array right
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, d;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &d);

    // Rotate the array right by d positions
    for (i = 0; i < d; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}