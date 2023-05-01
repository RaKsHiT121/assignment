//check if a no. is palindrome or not

#include<stdio.h>
int main()
{
    int i,j=0,a,k;
    printf("enter no: ");
    scanf("%d",&i);
    a=i;
    while(i>0)
    {
        k=i%10;
        j=j*10+k;
        i/=10;
    }
    if(j==a)
    printf("%d is a palindrome",a);
    else
    printf("%d is not a palindrome",a);
    
}