#include <stdio.h>

void display(int roll[], char name[][30], int marks[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

int main()
{
    int roll[5], marks[5], i;
    char name[5][30];

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &roll[i]);

        getchar();

        printf("Name: ");
        gets(name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    display(roll, name, marks, 5);

    return 0;
}