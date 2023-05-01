//to enter month no. and get days in it

#include<stdio.h>
int main()
{
    int i;
    printf("enter month no.");
    scanf("%d",&i);
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
    printf("it has 31 days");
    if (i==4||i==6||i==9||i==11)
    printf("it has 30days");
    if (i==2)
    printf("it may have 28 or 29 days");
}