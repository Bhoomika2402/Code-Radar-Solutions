#include<stdio.h>

void main() {
    int s1, s2, s3;
    
    // Input the three sides of the triangle
    scanf("%d %d %d", &s1, &s2, &s3);
    
    // Check if the sides form a valid triangle using the triangle inequality theorem
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        // Check for Equilateral Triangle
        if (s1 == s2 && s2 == s3) {
            printf("Equilateral\n");
        }
        // Check for Isosceles Triangle
        else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("Isosceles\n");
        }
        // If no two sides are equal, it is a Scalene Triangle
        else {
            printf("Scalene\n");
        }
    } 
}
