#include<stdio.h>
#include<math.h>
struct height
{
    int feet; 
    int inch;
};
void main()
{
 struct height h1,h2,h3;
printf("enter the value of  height");
scanf("%d%d%d%d",&h1.feet,&h1.inch,&h2.feet,&h2.inch);
h3.inch =( h1.inch + h2.inch )%12;
int y = (h1.inch+h2.inch)/12;
h3.feet = (h1.feet+h2.feet+y);
printf("height is:");
printf("%d %d",h3.feet , h3.inch);
} 