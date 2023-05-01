//to check whether a character is vowel consonant or special character

#include<stdio.h>
int main()
{
    char i;
    printf("enter character: ");
    scanf("%c",&i);
        if (((i>64)&&(i<91))||((i>96)&&(i<122)))
        printf("it is a alphabet");
        else
        {if ((i>47)&&(i<57))
        printf("it is a digit");
        else
        printf("it is a special character");
    }
}