//to check whther a character is alphabet or not

#include<stdio.h>
int main()
{
    char i;
    printf("enter character: ");
    scanf("%c",&i);
    if ((i>64&&i<91)||(i>96&&i<122))
    printf("%c is an alphabet",i);
    else
    printf("%c is not an alphabet",i);
}