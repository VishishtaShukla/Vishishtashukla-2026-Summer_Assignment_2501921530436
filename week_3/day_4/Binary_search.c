#include <stdio.h>

int main()
{
    int a[10], n, i;
    int key, low, high, mid, found = 0;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}