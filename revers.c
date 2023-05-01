//to get reverse of  a no.

#include<stdio.h>
int main()
{
    int i,j=0,k;
    printf("enter no: ");
    scanf("%d",&i);
    for(i;i>0;)
    {
        k=i%10;
        j=j*10+k;
        i/=10;
    }
    printf("reversed no is %d",j);
}