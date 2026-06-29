//Menu Ddriven String Operations
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("\n1. Find Length");
    printf("\n2. Reverse");
    printf("\n3. Convert to Uppercase");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reversed String = %s", str);
            break;

        case 3:
        {
            int i;
            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("Uppercase String = %s", str);
            break;
        }

        default:
            printf("Invalid Choice!");
    }

    return 0;
}