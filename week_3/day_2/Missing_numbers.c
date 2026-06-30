#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0, total = 0;

    printf("Enter total numbers (including missing): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}