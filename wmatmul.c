#include<stdio.h>
int main()
{
    int i,j,m,n,a[12344][344],b[9876][987];
    printf("enter no of rows in first matrice");
    scanf("%d",&i);
    printf("enter no of elements in second matrix");
    scanf("%d",&j);
    for(int k=0;k<i;k++)
    {
        for(int l;l<j;l++)
        {
            printf("enter matrix elements: \n");
            scanf("%d",&a[k][l]);
        }
    }
    printf("\nfor second elemnts\n");
    printf("enter rows for second matrix");
    scanf("%d",&m);
    printf("\nenter columns for second matrix");
    scanf("%d",&n);
    for(int x;x<m;x++)
    {
        for(int y;y<n;y++)
        {
            printf("enter elements: ");
            scanf("%d",b[x][y]);
        }
    }

}