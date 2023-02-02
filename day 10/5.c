#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; i++)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    int x=n1*n2;
    int m=gcd*gcd;
    int ans;
    ans=x/m;
    printf("%d",ans);

    return 0;
}