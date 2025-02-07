#include <stdio.h>

int main() {
    int i, j, n;

    // Ask the user for the number of rows
   
    scanf("%d", &n);

    // Loop to print each row
    for(i = 1; i <= n; i++) {
        // Print spaces before the stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars in each row
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
