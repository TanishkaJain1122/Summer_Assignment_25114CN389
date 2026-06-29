//Inventory Management System
#include <stdio.h>

struct Inventory
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Inventory item;

    printf("Enter Product ID: ");
    scanf("%d", &item.id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n----- Inventory Details -----\n");
    printf("Product ID : %d\n", item.id);
    printf("Product Name : %s\n", item.name);
    printf("Quantity : %d\n", item.quantity);
    printf("Price : %.2f\n", item.price);
    printf("Total Value : %.2f\n", item.quantity * item.price);

    return 0;
}