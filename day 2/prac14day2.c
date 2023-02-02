#include <stdio.h>
int main()
{
	int n,i,j,k,m;              	                  
	printf("input the number\n");    
    scanf("%d", &n);   
    for(i=0;i<n;i++)
    {
        if(i==0 || i==n-1)
        {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        else 
        {
            for(k=0;k<n-i-1;k++)
            {
                printf(" ");
            }
            for(m=i;m<=i;m++)
            {
                printf("*");
            }
            printf("\n");
        }
        
        
    }
}
