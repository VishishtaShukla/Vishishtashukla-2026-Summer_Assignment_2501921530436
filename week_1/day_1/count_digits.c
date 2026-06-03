#include<stdio.h>
int main()
{
    int n,d,c=0;
    printf("Enter the number:");    
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    printf("Number of digits in the number is: %d",c);
    return 0;
}