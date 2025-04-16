// Write a program to print the following pattern. (5)
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *

#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)  // 4 rows for this pattern
    {
        for(j = 1; j <= 7; j++)  // 7 positions since first row has 7 stars
        {
            if(j <= 5-i || j >= 3+i)  // Condition for star placement
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}