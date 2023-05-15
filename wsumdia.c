k/ to find sum of diagonal element: 

#include<stdio.h>
int main()
{
    int i,b;
    int a[879][876];
    printf("enter no. of rows or columns: ");
    scanf("%d",&i);
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<i;l++)
        {
            printf("enter a[%d][%d] element: ",k,l);
            scanf("%d",&a[k][l]);
        }
    }
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<i;l++)
        {
            if(k==l)
            b+=a[k][l];
        }
    }
    printf("sum of diagonal elemts is %d",b);
}