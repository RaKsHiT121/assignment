//to check whether a trianle is equilateral isosceles or scalene
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter first side");
    scanf("%d",&i);
    printf("enter second side");
    scanf("%d",&j);
    printf("enter third side");
    scanf("%d",&k);
    if((i==j)||(j==k)||(j==i))
    {
        if(i==j&&j==k)
        {
            printf("it is a equilateral triangle");
        }
        else
        printf("it is a isosceles triangle");
    }
    else if((i*i+j*j==k*k)||(k*k+j*j==i*i)||(i*i+k*k==j*j))
    {
        printf("it is a right angled trinagle");
    }
    else
    printf("it is a scalene triangle");
}