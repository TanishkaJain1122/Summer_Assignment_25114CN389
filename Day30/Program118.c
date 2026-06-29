//Mini Library System
#include <stdio.h>

struct Library
{
    int id;
    char book[50];
};

int main()
{
    struct Library b[5];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf(" %[^\n]", b[i].book);
    }

    printf("\n--- Library Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s\n", b[i].book);
    }

    return 0;
}