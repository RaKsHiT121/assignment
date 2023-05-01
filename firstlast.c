//first and last digit of a no.

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
    printf("first digit is %d and last digit is %d",i,a);
}