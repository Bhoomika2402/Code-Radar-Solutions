#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the triangle
    
    for (int i = 1; i <= n; i++) {  // Loop for each row
        // Print spaces
        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next row
        printf("\n");
    }

    return 0;
}
