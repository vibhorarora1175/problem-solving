#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the three integers");
	
	scanf("%d%d%d",&a,&b,&c);
	printf("the largest number is :");
	if(a>b>c)
	{
		printf("%d",a);
	}
	if(b>a&&b>c)
	{
		printf("%d",b);
	}
	if(c>a&&c>b)
	{
		printf("%d",c);
	}
}
