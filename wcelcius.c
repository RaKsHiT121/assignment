//to convert farenheit to celciusand vice versa

#include<stdio.h>
int main()
{
    int i;
    float j;
    printf("1.Farenheit to celcius\n2.Celcius to farenheit\n");
    printf("choose any one option: ");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        printf("enter temp. in farentiet: ");
        scanf("%f",&j);
        printf("%f in celcius is %f",j,((j-32)*5)/9);
        break;
        case 2:
        printf("enter temp. in celcius: ");
        scanf("%f",&j);
        printf("%f in farenheit is: %f",j,(9*j/5)+32);
        break;
        default:
        printf("\nenter valid choice");

    }
}