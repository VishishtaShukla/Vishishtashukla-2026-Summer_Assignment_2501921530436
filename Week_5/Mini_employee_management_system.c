#include <stdio.h>

int main()
{
    int id[3], salary[3], i;
    char name[3][30];

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &id[i]);

        getchar();

        printf("Employee Name: ");
        gets(name[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nEmployee ID : %d", id[i]);
        printf("\nName        : %s", name[i]);
        printf("\nSalary      : %d\n", salary[i]);
    }

    return 0;
}