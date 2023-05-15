// to make a structure for employee database

#include<stdio.h>
#include<string.h>
class employee{
    string name;
    int empid;
    int salary;
    string post;
}
int main()
{
    employee e[50];
    for(int i=0;i<50;i++)
    {
        printf("enter name: ");
        scanf("%s",&e[i].name);
        printf("enter empid: ");
        scanf("%d",&e[i].empid);
        printf("enter salary: ");
        scanf("%d",&e[i].salary);
        printf("enter post: ");
        scanf("%s",&e[i].post);
    }
}