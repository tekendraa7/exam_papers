/*
 Write down the output of printf() functions for the following group of instructions
*/

#include <stdio.h>

int main() {
    float a = 7.3285;
    int b = 9514;

    printf("a= %f and b= %-6d in the first line", a, b);
    printf("\na= %-7.3f and b= %07d in second line", a, b);
    printf("\na= %0.2f and b= %3d in the third line", a, b);

    return 0;
}
