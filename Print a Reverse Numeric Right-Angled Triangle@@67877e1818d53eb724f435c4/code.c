#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper part of the diamond
    for( int i = n; i <= 1; i--) 
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
