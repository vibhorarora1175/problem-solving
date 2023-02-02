#include <stdio.h>
#include <math.h>
int *update(int ar[],int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        ar[i]=a[i];
    }
    return ar;
}
int reverse(int ar[], int n)
{
    int a[n];
    for (int i = 0  ; i < n-1; i++)
    {
        for (int j = i; j <n; j++)
        {
                a[j] = ar[n-j];
                printf("%d ",a[j]);
        }
        printf("\n");
        update(ar,a,n);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            ar[i] = i;
        }
        reverse(ar, n);
    }

    return 0;
}
//     if (n > 0)
//     {
//         for (int j = n - 1; j >= 0; j--)
//         {
//             a[j] = ar[m];
//             m++;
//         }
//         reverse(a, n - 1);
//     }
//     else
//     {
//         return
//     }