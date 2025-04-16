/*WAP in C to print the pattern give below                                                   
PQRSRQP
PQR RQP
PQ   QP
P     P
*/
#include<stdio.h>
int main()
{
   int i,j,k;
   for(i=0;i<=3;i++)
   {
    for(j=80;j<=83-i;j++)
    {
        printf("%c",j);
    }
    for(int sp=1;sp<=i*2-1;sp++)
    {
        printf(" ");
    }
    for(k=83-i;k>=80;k--)
    {
        if(k==83);
        else
        printf("%c",k);
    }


    printf("\n");
   }

}   