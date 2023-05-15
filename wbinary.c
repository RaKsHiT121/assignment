// to do binary search ina n array
#include<stdio.h>
int main()
{
    int ar[]={2,3,4,5,6,7,9,11,34,56,78,90,356,886,456,678,6762};
    int i,j,h,b=1;
    printf("enter item to be searched: ");
    scanf("%d",&i);
    printf("enter size of list:");
    scanf("%d",&j);
    if (j%2==0)
    h=j/2;
    else
    h=(j+1)/2;
    while(b!=0)
    {
        if (ar[h]==i)
        {
            printf("element found at %d place",h);
            b=0;
            break;
        }
        if(ar[h]>i)
        h-=1;
        if(ar[h]<i)
        h+=1;
    }
} 