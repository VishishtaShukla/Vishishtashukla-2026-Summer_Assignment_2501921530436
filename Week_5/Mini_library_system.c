#include <stdio.h>

int main()
{
    int id[3], i;
    char book[3][30];

    printf("Enter details of 3 books:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &id[i]);

        getchar();

        printf("Book Name: ");
        gets(book[i]);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook ID   : %d", id[i]);
        printf("\nBook Name : %s\n", book[i]);
    }

    return 0;
}