#include<stdio.h>
int main()
{   int n, a=0,b=1,c;
    printf("Enter the range: ");
    scanf("%d",&n);
    if(n==1)
    printf("The %dst term of the Fibonacci series is: %d",n,a);
    else if(n==2)
    printf("The %dnd term of the Fibonacci series is: %d",n,b);
    else
    for(int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    } 
    printf("The %d term of the Fibonacci series is: %d",n,c);
    return 0;
}
