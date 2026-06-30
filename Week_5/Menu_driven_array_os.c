#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;
    float avg;

    printf("Enter Size: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n1. Display Array\n");
    printf("2. Sum\n");
    printf("3. Average\n");

    int choice;

    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];

            printf("Sum = %d", sum);
            break;

        case 3:
            for(i = 0; i < n; i++)
                sum += a[i];

            avg = (float)sum / n;

            printf("Average = %.2f", avg);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}