#include <stdio.h>

int main()
{
    int a[10], n, i, j;
    int max = 0, freq, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        freq = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
                freq++;
        }

        if(freq > max)
        {
            max = freq;
            element = a[i];
        }
    }

    printf("Element = %d\n", element);
    printf("Frequency = %d", max);

    return 0;
}