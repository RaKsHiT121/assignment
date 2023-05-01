// calculator

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Choose any one:\n1.Add\n2.Sub\n3.multiply\n4.division\n");
    scanf("%d",&i);
    printf("enter first no: ");
    scanf("%d",&j);
    printf("enter second no.: ");
    scanf("%d",&k);
    switch(i)
    {
        case 1:
        printf("Sum of %d and %d is %d",j,k,k+j);
        break;
        case 2:
        printf("Subtraction of %d and %d is %d",j,k,j-k);
        break;
        case 3:
        printf("Multiplicaton of %d and %d is %d",j,k,k*j);
        break;
        case 4:
        printf("divison of %d and %d is %d",j,k,j/k);
        break;
        default:
        printf("enter valid choice");
    }
}
