#include <stdio.h>

int main()
{
    int a[10], n, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
                break;
        }

        if(i == j)
            printf("%d ", a[i]);
    }

    return 0;
}