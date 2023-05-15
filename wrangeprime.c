// to print prime no. n=between a range

#include<stdio.h>
void prime(int l)
{
    int k=0;
    for(int f=2;f<=l/2;f++)
    {
        if (l%f==0)
        {
            k+=1;
            break;
        }
    }
    if (k==0)
    printf("\n%d is a prime no.",l);
}
int main()
{
    int i,j,l;
    printf("enter no from where you wnat: ");
    scanf("%d",&i);
    printf("enter no. till where you want: ");
    scanf("%d",&j);
    for(l=i;l<j+1;l++)
    {
        prime(l);
    }

}