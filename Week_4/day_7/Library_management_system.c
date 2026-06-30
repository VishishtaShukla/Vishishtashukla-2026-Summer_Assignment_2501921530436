#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    getchar();

    printf("Enter Book Name: ");
    gets(bookName);

    printf("\nLibrary Record\n");
    printf("Book ID   : %d\n", bookId);
    printf("Book Name : %s\n", bookName);

    return 0;
}