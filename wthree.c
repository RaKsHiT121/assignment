// to find maximum amiong three no.s  (all tree should be different)
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter first no: ");
    scanf("%d",&i);
    printf("enter third no: ");
    scanf("%d",&k);
    printf("enter second no: ");
    scanf("%d",&j);
    if ((i>j)&&i>k)
    printf("%d is the greatest",i);
    if (j>i&&j>k)
    printf("%dis the greatest",j);
    if (k>i&&k>i)
    printf("%d is the greatest",k);
}