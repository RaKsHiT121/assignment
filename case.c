#include<stdio.h>
int main()
{
    char i;
    printf("enter character: ");
    scanf("%c",&i);
   // printf("%d",i);
    if (i>65&&i<91)
    printf("%c is uppercase",i);
    else
    printf("%c is lowercase",i);
}