// to find transpose of a matrix;

#include<stdio.h>
int main()
{
    int i,j;
    int a[876][980];
    printf("enter no of rows: ");
    scanf("%d",&i);
    printf("\nno of columns: ");
    scanf("%d",&j);
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            printf("enter a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    

}