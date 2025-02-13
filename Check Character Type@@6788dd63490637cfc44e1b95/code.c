#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    int n=ch;
    if(n>=65&&n<=90||n>=97&&n<=122)
    {
        if(ch=='a'|| ch =='u'|| ch =='i'|| ch=='o'||ch=='e'|| ch =='A'|| ch=='E'|| ch=='I'|| ch =='O'|| ch=='U')
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