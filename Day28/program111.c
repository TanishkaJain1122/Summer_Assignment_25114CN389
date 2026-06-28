//Ticket Booking System
#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int price = 500, total;

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    total = t.seats * price;

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", t.name);
    printf("Seats Booked : %d\n", t.seats);
    printf("Total Amount : %d\n", total);

    return 0;
}