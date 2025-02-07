#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // Outer loop to handle the number of rows
    for (int i = n; i >= 1; i--) {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
