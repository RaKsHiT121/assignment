// to find hcf of two no;

#include<stdio.h>
int hcf(int x,int y);
int main()
{
    int i,j;
    printf("enter first no: ");
    scanf("%d",&i);
    printf("enter second no:");
    scanf("%d",&j);
    hcf(i,j);
}
int hcf(int x,int y)
{
    int a;
    if (x>y)
    a=y;
    else
    a=x;
    for(a;a>0;a--)
    {
        if(x%a==0&&y%a==0)
        {
            printf("hcf of %d and %d is %d",x,y,a);
            break;
        }
    }
}