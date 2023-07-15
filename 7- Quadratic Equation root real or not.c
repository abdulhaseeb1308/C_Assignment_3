//7. Write a program to check whether roots of a given quadratic equation are real & 
//distinct, real & equal or imaginary roots

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
    } else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}

