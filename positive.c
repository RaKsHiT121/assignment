#include<stdio.h>
int main()
{
    int i;
    printf("enter no.: ");
    scanf("%d",&i);
    switch (i>0)
    {
        case 1:
        printf("positive no.");
        break;
        case 0:
        switch(i<0)
        {
            case 0:
            printf("no. is zero");
            break;
            case 1:
            printf("no. is negative");
            break;
        }
    }
}
