// to display other no. pattern

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf(" %d",i+1);
        }printf("\n");
    }
}