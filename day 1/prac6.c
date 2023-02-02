#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isoceles triangle");
    }
    else
    {
        printf("scalen triangle");
    }

}