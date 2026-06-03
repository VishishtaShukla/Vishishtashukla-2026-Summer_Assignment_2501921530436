#include<stdio.h>
int main()
{
    int n1,n2, i,c=0;
    printf("Enter the lower limit: ");
    scanf("%d", &n1);
    printf("Enter the upper limit: ");
    scanf("%d", &n2);

    for(i= n1; i<= n2; i++)
    {
        c=0;
        for(int j=2; j<=i; j++)
        {
            if(i%j == 0)
            {
                c++;
            }
        }
        if(c == 1)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}