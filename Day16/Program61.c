//Write a program to find missing number in an array
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, sum = 0, total;

    printf("Enter the number of elements in the array (n-1): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to n):\n", n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2; // Sum of first n natural numbers
    int missingNumber = total - sum;

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}