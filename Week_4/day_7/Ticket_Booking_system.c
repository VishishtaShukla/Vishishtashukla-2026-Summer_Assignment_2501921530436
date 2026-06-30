#include <stdio.h>

int main()
{
    char name[50];
    int seats;

    printf("Enter Customer Name: ");
    gets(name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\nTicket Booked Successfully\n");
    printf("Name  : %s\n", name);
    printf("Seats : %d\n", seats);

    return 0;
}