//to check whether a character is vowel or consonants

#include<stdio.h>
int main()
{
    char i;
    printf("enter alphabet: ");
    scanf("%c",&i);
    if ((i=='A')||(i=='E')||(i=='I')||(i=='O')||(i=='U')||(i=='a')||(i=='e')||(i=='i')||(i=='o')||(i=='u'))
    printf("it is a vowel");
    else
    printf("it is a consonant");
}