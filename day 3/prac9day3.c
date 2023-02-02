/*Input:
N = 3
Output:
* ** ***
Explanation:
First, print 1 asterisk then space after
that print 2 asterisk and space after that 
print 3 asterisk now stop as N is 3.
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the  number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf(" ");
    }
}