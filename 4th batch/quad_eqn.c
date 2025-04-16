/*

Write a meaningful program to calculate all the possible roots of quadratic equation ax²+bx+c=0 using
concept of user defined function provided that all the notations have their usual meaning

*/


#include <stdio.h>
#include <math.h>

void roots(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    roots(a, b, c);

    return 0;
}

void roots(float a, float b, float c) {
    float r1, r2, real, imag;
    float d = b * b - 4 * a * c;

    if (d == 0) {
        printf("The roots are real and equal:\n");
        r1 = (-b) / (2 * a);
        r2 = (-b) / (2 * a);
        printf("The roots are r1 = %f and r2 = %f\n", r1, r2);
    } 
    else if (d > 0) {
        printf("The roots are real and distinct:\n");
        r1 = ((-b) + sqrt(d)) / (2 * a);
        r2 = ((-b) - sqrt(d)) / (2 * a);
        printf("The roots are r1 = %f and r2 = %f\n", r1, r2);
    } 
    else {
        printf("The roots are imaginary:\n");
        real = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);
        printf("r1 = %f + %fi\n", real, imag);
        printf("r2 = %f - %fi\n", real, imag);
    }
}
