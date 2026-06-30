#include <stdio.h>

int main()
{
    int accNo;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    getchar();

    printf("Enter Account Holder Name: ");
    gets(name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\nAccount Details\n");
    printf("Account No : %d\n", accNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}