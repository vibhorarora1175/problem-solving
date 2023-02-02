// You have been an integer value N. Your task is to populate the array using the integer values
//  in the range 1 to N(both inclusive) in the order - 1,3,5,7.......8,6,4,2.
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d", &n);
    int x = n % 2;
    if (x == 0)
    {
        for (i = 1; i < n; i += 2)
        {
            printf("%d ", i);
        }
        for (i = n; i > 0; i -= 2)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = 1; i <= n; i += 2)
        {
            printf("%d ", i);
        }
        for (i = n - 1; i > 0; i -= 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}