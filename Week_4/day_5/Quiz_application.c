#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Lucknow\n");

    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n");

    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nYour Score = %d/2", score);

    return 0;
}