#include <stdio.h>

void palindrome(int n)
{
    int rev = 0, rem, temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}