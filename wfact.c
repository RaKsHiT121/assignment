// to find factorial of a no: 

#include<stdio.h>
int main()
{
    int i,k=1;
    printf("enter no: ");
    scanf("%d",&i);    
    if(i>0)
    {
    for (int j=i;j>0;j--)
    {
        k*=j;
    }
    printf("factorial of %d is %d",i,k);
    }
    else{
        printf("factorial of %d is not defined:...");
    }
}