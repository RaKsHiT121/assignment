//to count no. of digit in a no. using do while loop

#include<stdio.h>
int main()
{
    int i,b,a=0;
    printf("enter no: ");
    scanf("%d",&i);
    do{
        i=i/10;
        a+=1;
    }while(i>0);
    printf("no of digits is %d",a);
}