//to find sum of first and last digit of a no.

#include<stdio.h>
int main()
{
    int i,a;
    printf("enter no: ");
    scanf("%d",&i);
    a=i%10;
    do{
        i=i/10;
    }while(i>=10);
    printf("Sum of first digit and last digit of a no. is %d",i+a);
}