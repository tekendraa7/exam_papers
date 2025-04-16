/*
. Write a program to enter a 6 digit number and 
find the sum and average of all its digits using do while loop
*/

#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float average;
    
    printf("Enter a 6-digit number: ");
    scanf("%d", &num);

    do {
        sum += num % 10;
        num /= 10;
        count++;
    } while (num > 0);

    average = (float)sum / count;

    printf("Sum of digits: %d\n", sum);
    printf("Average of digits: %.2f\n", average);

    return 0;
}
