#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the coordinate of the point");
    scanf("%d%d",&x,&y);
    if(x<0 && y<0)
    {
        printf("4");
        }

    else if(x>0 && y<0)
    {
        printf("3");
    }
    else if(x>0 && y>0)
    {
        printf("1");
    }
    else if(x<0 && y>0)
    {
        printf("2");
    }
}