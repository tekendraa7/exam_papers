/*   Write a program to insert an extra element at any valid position of 1D array having 'n' integer elements entered by user and
display the resultant array  */

#include<stdio.h>
int main()
{
    int a[20],n,i,x,pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element to be inserted: ");
    scanf("%d",&x);
    for(i=n;i>pos-1;i--)
    {
        a[i]=a[i-1];
    
    }
    a[pos-1]=x;
    n++;
    printf("The resultant array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    return 0;
}