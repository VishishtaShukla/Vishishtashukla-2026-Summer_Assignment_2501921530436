#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of %d natural numbers is %d",n,s);
    return 0;
}