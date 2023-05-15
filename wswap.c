// to swap two no;

#include<stdio.h>
int main()
{
   int a=8,b=7,c=0;
   printf("before swapping\n");
   printf("a=%d\n b=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("after swapping");
   printf("a=%d\n b=%d\n",a,b);
}