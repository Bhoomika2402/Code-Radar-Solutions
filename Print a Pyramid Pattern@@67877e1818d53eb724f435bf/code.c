#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n;i++)
    {
        for(int space=n-1;space>=0;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        
    }
    return 0;
}