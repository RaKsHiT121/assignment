//sum of n natural no.

#include<stdio.h>
int main()
{
    int j,i,sum=0;
    printf("enter no. till where u want:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        sum+=j;
        
    }
    printf("sum of %d natural no. is %d",i,sum);

}