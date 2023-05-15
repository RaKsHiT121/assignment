// to do linear search operaton on a list

#include<stdio.h>
    int main()
    {
        int a[]={9,7,8,987,67,2345,6543,9876,7654,653,65344,324565};
        int j,i,l=0;
        printf("enter elemnet to be searched: ");
        scanf("%d",&i);
        printf("enter size of an array: ");
        scanf("%d",&j);
        for(int k=0;k<j;k++)
        {
            if (a[k]==i)
            {
                printf("element found at %d index",k+1);
                l+=1;
                break;
            }
        }
        if (l==0)
        printf("\nelemnt doesnt exist in list");
    }
