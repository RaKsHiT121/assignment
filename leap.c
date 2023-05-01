//to check whther a year is leap year or not.

#include<stdio.h>
int main()
{
    int i;
    printf("enter year: ");
    scanf("%d",&i);
    if (i%100==0)
    {
        if(i%4==0)
        {
            printf("%d is a leap year",i);
        }
        else{
            printf("%d is not a leap year",i);
        }
    }
    else{
        if(i%4==0)
        {
            printf("%d is a leap year",i);

        }
        else
        printf("%d is not a leap year",i);
    }
}