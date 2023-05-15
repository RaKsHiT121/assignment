// to check a no. is palindrome or not 

#include<stdio.h>
int main()
{
    int a,i,j,k=0;
    printf("enter no: ");
    scanf("%d",&i);
    a=i;
    while(i>0)
    {
        j=i%10;
        k=10*k+j;
        i/=10;
    }
    if(k==a)
    printf("%d is a palindrome",a);
    else
    printf("%d is not a palindrome",a);
}