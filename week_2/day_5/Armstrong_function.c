#include <stdio.h>
#include<math.h>
void armstrong(int n)
{
    int sum = 0, rem,num=n, temp = n,c=0;
    while(temp>0)
    {
        c++;
        temp=temp/10;
    }

    while(num > 0)
    {
        rem = num % 10;
        sum = sum + pow(rem,c);
        num = num / 10;
    }

    if(n == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}