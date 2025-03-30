#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}


