//to calculate grade for 5 sujects

#include<stdio.h>
int main()
{
    float i,j,k,l,m,sum,per;
    printf("enter marks for physics: ");
    scanf("%f",&i);
    printf("enter marks for chemistry: ");
    scanf("%f",&j);
    printf("enter marks for maths: ");
    scanf("%f",&k);
    printf("enter marks for biology: ");
    scanf("%f",&l);
    printf("enter marks for computer: ");
    scanf("%f",&m);
    sum=i+j+k+l+m;
    per=sum/5;
    printf("%f\n",per);
    if (per>=90)
    printf("GRADE =A");
    else if (per>=80)
    printf("GRADE =B");
    else if (per>=70)
    printf("GRADE =C");
    else if (per>=60)
    printf("GRADE =D");
    else if (per>=50)
    printf("GRADE =E");
     else if(per<40)
    printf("grade = f");          
}