/*
batch 2080 group B qn 8.B) cos(x) series
*/


#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sign=-1;
    float x,sum=0.0;
    printf("Enter the angle 'x' in degrees and the number of terms 'n': ");
    scanf("%f %d",&x,&n);
    x=(x*3.14)/180.0;
    for(i=0;i<=n;i=i+2)
    {
        float fact=1.0;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(sign*(-1))*pow(x,i)/(fact);
        sign=sign*(-1);

    }
    printf("Sum of series is: %f",sum);
    return 0;
}