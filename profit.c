//to calcuate profit or loss
#include<stdio.h>
int main()
{
    float i,j;
    printf("enter cost price: ");
    scanf("%f",&i);
    printf("\nenter selling price: ");
    scanf("%f",&j);
    if(i>j)
    {
        printf("loss of %f",i-j);
    }
    if(j>i)
    {
        printf("profit of %f",j-i);
    }
}