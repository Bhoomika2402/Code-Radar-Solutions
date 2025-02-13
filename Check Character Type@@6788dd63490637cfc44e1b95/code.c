#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int n=ch;
    if(n>=65&&n<=90||n>=97&&n<=122)
    {
        if(ch==a||ch==i||ch==u||ch==o||ch==e||ch==A||ch==E||ch==O||ch==I||ch==U)
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }

    }
    else if(n>=48&&n<=57)
    {
        printf("Digit");

    }
    else{
        printf("Special Character");
    }
    return 0;
}