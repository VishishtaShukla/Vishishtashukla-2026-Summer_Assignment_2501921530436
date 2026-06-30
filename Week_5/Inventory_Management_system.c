#include <stdio.h>

int main()
{
    int id, quantity;
    char item[50];
    float price;

    printf("Enter Item ID: ");
    scanf("%d", &id);

    getchar();

    printf("Enter Item Name: ");
    gets(item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("\nInventory Details\n");
    printf("Item ID   : %d\n", id);
    printf("Item Name : %s\n", item);
    printf("Quantity  : %d\n", quantity);
    printf("Price     : %.2f\n", price);

    return 0;
}