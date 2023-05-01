//displaying n natural no. in reverse order

#include<stdio.h>
int main()
{
    int j;
    printf("enter no. till where you want: ");
    scanf("%d",&j);
    while(j>0)
    {
        printf("%d\n",j);
        j--;
    }
}