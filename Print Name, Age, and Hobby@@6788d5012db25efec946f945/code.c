#include <stdio.h>

int main() {
    char name[100];
    int age;
    char h[100];
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",h);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",h);

    return 0;
}