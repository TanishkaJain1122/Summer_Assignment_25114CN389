//Write a Program to Frequency of an element
#include <stdio.h>
int main() {
    int arr[100];
    int n, i, key;
    int frequency = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its frequency: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            frequency++;
        }
    }

    printf("The frequency of element %d is: %d\n", key, frequency);

    return 0;
}
