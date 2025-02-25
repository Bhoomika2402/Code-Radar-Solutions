#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int k = 1; k <= n - 1; k++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= n; j++) {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}
