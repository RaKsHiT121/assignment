//to get no. of days in a month 

#include<stdio.h>
int main()
{
    int i;
    printf("enter week no: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thursday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("enter valid week no.");
    }
}
    