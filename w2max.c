// to find two max and min elements

#include<stdio.h>
int main()
{
    int a[]={34,322,43,21,221,33};
    int b=a[0],c=a[0];
    for( int i=0;i<6;i++)
    { op 
        if(b<a[i])
        b=a[i];
        if(c>a[i])
        c=a[i];
    }
    printf("highest is %d",b);
    printf("lowest is %d",c);
    
}