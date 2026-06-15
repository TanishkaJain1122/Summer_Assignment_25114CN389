//Write a Program to find duplicate elements in an array.
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("%d ", arr[i]);
            // To avoid printing duplicates multiple times
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = -1; // Mark as counted
                }
            }
        }
    }
    return 0;
}