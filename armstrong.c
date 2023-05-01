//to check if a no.is armstrong

#include<stdio.h>
int main()
{
    int i,j,k,l=0;
    printf("enter no: ");
    scanf("%d",&i);
    j=i;
    for(i;i>0;)
    {
        k=i%10;
        l=l+k*k*k;
        i/=10;
    }
    if(l==j)
    printf("%d is an armstrong no.",j);
    else
    printf("%d is not an armstrong no.",j);  
}