// to find lcm of two no.

#include<stdio.h>
int lcm(int x,int y);
int main()
{
    int i,j;
    printf("enter first no: ");
    scanf("%d",&i);
    printf("enter second no:");
    scanf("%d",&j);
    lcm(i,j);
}
int lcm(int x,int y)
{
    int a;
    if (x>y)
    a=x;
    else
    a=y;
    while(1)
    {
        if((a%x==0)&&(a%y==0))
        {
            printf("lcm of %d and %d is %d",x,y,a);
            break;
        }
        a++;
    }
}