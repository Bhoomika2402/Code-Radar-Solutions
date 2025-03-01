#include <stdio.h>

int main() {
    int n;
    int num = 1;
    scanf("%d", &n); // Input the number of rows

    for (int i = 1; i <= n; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop to print numbers
            printf("%d ", num); // Print the number
            num--; // Decrease the number after each print
        }
        num++; // Increment num after the inner loop
        printf("\n"); // New line after each row
    }

    return 0;
}
