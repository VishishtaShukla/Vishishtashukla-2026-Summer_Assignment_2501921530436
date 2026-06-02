#include<stdio.h>
int main()
{
    int n,rev=0,d,num;
    printf("Enter the number:");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(rev==n)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
    return 0;
}
