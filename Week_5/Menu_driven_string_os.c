#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter String: ");
    gets(str);

    printf("\n1. Length\n");
    printf("2. Reverse\n");
    printf("3. Uppercase\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s", str);
            break;

        case 3:
            printf("Uppercase = %s", strupr(str));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}