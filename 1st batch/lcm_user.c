// WAP in C to find LCM and HCF of two numbers by using the concpet of user defined function and display the proper message.
#include <stdio.h>
int HCF(int a, int b);
int LCM(int a, int b, int hcf) ;


int main() {
    int x,y, hcf, lcm;

    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    
    hcf = HCF(x,y);

    
    lcm = LCM(x,y,hcf);

    
    printf("The HCF of %d and %d is: %d\n", x, y, hcf);
    printf("The LCM of %d and %d is: %d\n", x, y, lcm);

    return 0;
}

// Function to find HCF of two numbers
int HCF(int a, int b) 
{
    if (b == 0)
    return a;
    return HCF(b, a % b);
}

// Function to find LCM of two numbers
int LCM(int a, int b, int hcf) 
{
    return (a * b) / hcf;
}