#include <stdio.h>
int maxi(int a[],int k,int ar[])
{
    for (int i = 0; i < k; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
            ar[0]=ar[i];
        }
    }
    return ar[0];
}
int find(int arr[], int k)
{
    int max;
    int a[k];
    int ar[k];
    for (int i = 0; i < k; i++)
    {
        ar[i]=arr[i];
        int sum = 0;
        while (arr[i] > 0)
        {
            int x=arr[i]%10;
            sum=sum+x;
            arr[i]=arr[i]/10;
            a[i]=sum;
        }
    }
    max=maxi(a,k,ar);
    return max;
}
int divisor(int n)
{
    int i = 1, k = 0;
    int arr[1000];
    int x;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr[k] = i;
            // printf("%d ",arr[k]);
            k++;
        }
    }
    if (k == 2)
    {
        printf("%d", n);
    }
    else
    {
        x = find(arr, k);
        printf("%d", x);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    divisor(n);

    return 0;
}
