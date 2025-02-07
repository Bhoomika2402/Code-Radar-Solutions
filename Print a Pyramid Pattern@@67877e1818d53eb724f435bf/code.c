#include <stdio.h>

int main() {
    int i, j, n;

    // Ask the user for the number of rows
   
    scanf("%d", &n);

    // Loop to print each row
    for(i = 1; i <= n; i++) {
        // Print spaces before the stars
        for(j=n-i;j>=0) {
            printf(" ");
        }

        // Print stars in each row
        for(int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
