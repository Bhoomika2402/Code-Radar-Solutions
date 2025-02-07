#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n;i++)
    {
        for(int space=n-i;space>=0)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*\n");
        }
    }
    return 0;
}