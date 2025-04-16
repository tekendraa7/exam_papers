// WAP a C program to print the fibonacci series using recursive function.
#include <stdio.h>
int fibo(int n)
{
    if(n==1)
    return 0;

    else if(n==2)
    return 1;

    else
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n,i,a;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++)
    {
        a=fibo(i);
        printf("%d ",a);
    }
}