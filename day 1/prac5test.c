#include<stdio.h>
void main()
{
     int d,m,y,n,lp,i,c,p,k;
    printf("enter the date");
    scanf("%d%d%d",&d,&m,&y);
    int bd=1,bm=1,by=2001;
    n=y-by;
    for(i=2001;i<y;i++)
    {
        if(y%4==0 && y%100!=0 || y%400==0){      {
          lp++;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            p=p+31;
        }
        else if(m==4 || m==6 || m==9 || m==11)
        {
            p=p+30;
        }
        else if(m==2)
        {
            if(y%4==0 && y%100!=0 || y%400==0)
            {
            p=p+29;
            }
            else
            {
                p=p+28;
            }
        }
    }
    c=(n)*365+lp+p+d;
    k=c%7;
    switch(k)
    {
        case 0:printf("monday");
        break;
        case 1:printf("tuesday");
        break;
        case 2:printf("wednesay");
        break;
        case 3:printf("thursday");
        break;
        case 4:printf("friday");
        break;
        case 5:printf("saturday");
        break;
        case 6:printf("sunday");
    }
    
}
}