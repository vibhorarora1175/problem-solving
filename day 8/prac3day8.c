// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
// For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8.
// We stop at this point because we are left with one digit.
#include <stdio.h>
#include <math.h>
int count(int n, int c)
{
    int m;
    while (n > 0)
    {
        m = n % 10;
        n = n / 10;
        c++;
    }
    printf("count is %d\n", c);
    return c;
}
int sum(int n, int c, int j)
{
    int x, k = 0,t=0;
    if (n < 10)
    {
        printf("\n%d", n);
    }
    else
    {
        
        for (int i = 0; i < c; i++)
        {
            x = n % 10;
            n = n / 10;
            j = j + x;
            printf("%d-%d\n", j, i);
        }
        return sum(j, c=count(j, t), k);
    }
}
int main()
{
    int n, c = 0, j = 0;
    printf("Enter the integer:\n");
    scanf("%d", &n);
    c=count(n, c);
    sum(n, c, j);
    return 0;
}