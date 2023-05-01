//sum of digits of no.

#include<stdio.h>
int main()
{
    int i,j,k=0,l;
    printf("enter no: ");
    scanf("%d",&i);
    l=i;
    do{
        j=i%10;
        k+=j;
        i/=10;
    }while(i!=0);
    printf("sum of digits of a no. is %d",k);
}