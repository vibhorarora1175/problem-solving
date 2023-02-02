#include<stdio.h>
void main()
{
    int a;
    printf("enter the year");
    scanf("%d",&a);
    if(a%4==0&& a%100!=0|| a%400==0)
    {
        printf("the year %d is leap year",a);
    }
    else
    {
        printf("not a leap year");
    }
}
