#include<stdio.h>
void main()
{
    int t;
    printf("enter the temperature in celcius of the surroundings");
    scanf("%d",&t);
    if(t<0)
    {
        printf("freezing weather");
    }
    else if(t>0 && t<10)
    {
        printf("very cold weather");
    }
    else if(t>10 && t<20)
    {
        printf("cold weather");
    }
    else if(t>20 && t<30)
    {
        printf("norml weather");
    }
    else if(t>30 && t<40)
    {
        printf("hot weather");
    }
    else 
    {
        printf("very hot weather");
    }
}