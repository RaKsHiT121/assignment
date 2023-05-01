//to find power of a no. using while loop

#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("enter base no.: ");
    scanf("%d",&i);
    k=i;
    printf("enter exponent: ");
    scanf("%d",&j);
    l=j;
    while(j>1)
    {
        i*=k;
        j--;
    }
    printf("%d raised to the power %d is %d",k,l,i);
}