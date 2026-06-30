#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            if(j > max)
            {
                max = j;

                for(int k = 0; k < j; k++)
                    longest[k] = str[start + k];

                longest[j] = '\0';
            }

            j = 0;
            start = i + 1;
        }
        else
        {
            j++;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}