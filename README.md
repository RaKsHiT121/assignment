# assignment


// to check whether a no. is divisble by 5 and 11 or not

#include<stdio.h>
int main()
{
    int i;
    printf("enter no: ");
    scanf("%d",&i);
    if (i%5==0)
    {
        if (i%11==0)
        printf("%d is divisible by both 5 &11",i);
        else
        printf("%d is divisible by 5",i);
    }
    else
    {
    if (i%11==0)
    printf("%d is divisible by 11",i);
    }
    if (i%5!=0&&i%11!=0)
    printf("%d is divisible neither by 5 nor by 11",i);
}
