//Write a program to find maximum frequency element in an array
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, j, maxCount = 0, maxElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("The element with maximum frequency is: %d\n", maxElement);

    return 0;
}