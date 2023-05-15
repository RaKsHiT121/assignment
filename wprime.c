// to check if a no. is prime or not:

#include<stdio.h>
int main()
{
    int i,k=0;
    printf("enter no: ");
    scanf("%d",&i);
    for(int j=2;j<i/2;j++)
    {
        if (i%j==0)
        {
            printf("%d is a composite no",i);
            k+=1;
            break;            
    }
    
    }
    if(k==0)
    printf("\n%d is a prime no:",i);
}