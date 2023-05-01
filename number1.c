// to printf no. pattern.

#include<stdio.h>
int main()
{
    int i,k=1;
    for(i=0;i<4;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf(" %d ",k);
            k++;
        }printf("\n");
    }
}