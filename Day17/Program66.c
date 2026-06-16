//Write a Program to Union of arrays
#include <stdio.h>
int main() {
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, i, j, k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array to unionArr
    for (i = 0; i < n1; i++) {
        unionArr[i] = arr1[i];
    }
    k = n1;

    // Add elements from second array if they are not already in unionArr
    for (j = 0; j < n2; j++) {
        int found = 0;
        for (i = 0; i < k; i++) {
            if (arr2[j] == unionArr[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            unionArr[k] = arr2[j];
            k++;
        }
    }

    printf("Union of the two arrays:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}