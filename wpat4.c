#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<10;i+=2)
    {
       for(k=1;k<10-i;k+=2)
      {
        printf(" ");
        }
    for(j=0;j<i;j++)
    {
        printf(" * ");
    }printf("\n");
    }
}