#include<stdio.h>
int main()
{
    int i,j,l,k;
    for(i=1;i<10;i+=2)
    {   
        for(k=1;k<10-i;k+=2)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            /*if(j<=5)
            {printf("%d",i);
            i++;}
            if(j>5)
         {   i--;
            printf("%d",i);*/
            printf("*");
        }
        printf("\n");
        }
  }

