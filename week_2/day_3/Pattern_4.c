#include <stdio.h>

int main() {
    int i,j,k,n=5;

    for(i = 1; i <= n; i++) {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j = 'A'; j < 'A'+i; j++)
            printf("%c",j);
        for(k='A'+i-2;k>='A';k--)
            printf("%c",k);
        printf("\n");
    }
    return 0;
}