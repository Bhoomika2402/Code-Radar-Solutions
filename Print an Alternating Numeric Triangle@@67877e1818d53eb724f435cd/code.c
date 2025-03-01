#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for printing the numbers in each row
        for (int j = 1; j <= i; j++) {
            // Print 1 if (i + j) is even, else print 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
