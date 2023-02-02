#include<stdio.h>
void main()
{
    int arr1[10],arr2[10],c[10],d[10],m=0,k=0,n=0,n1,n2,l,i,j,symm[100];
    printf("Enter the size of set A: ");
    scanf("%d",&n1);
    printf("Enter the elements of set A: ");
    for( i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    printf("Enter the size of set B: ");
    scanf("%d",&n2);
    printf("Enter the elements of set B: ");
    for( i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr2[j]==arr1[i])
             break;
        }
        if(j==n2)
        {
           for(l=0;l<k;l++)
            {
                if(c[l]==arr1[i])
                 break;
            }
            if(l==k)
            {
                c[k]=arr1[i];
                k++;
            }
        }    
    }
    for( i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(arr2[i]==arr1[j])
             break;
        }
        if(j==n1)
        {
            for(l=0;l<m;l++)
            {
                if(d[l]==arr2[i])
                 break;
            }
            if(l==m)
            {
                d[m]=arr2[i];
                m++;
            }
        }  
    }
    for(i=0;i<k;i++)
    {
        symm[n]=c[i];
        n++;
    }
    for(i=0;i<m;i++)
    {
        symm[n]=d[i];
        n++;
    }
    printf("\nSrt Symmetric Difference of sets is: \n");
    for(i=0;i<n;i++)
    printf("%d ",symm[i]);
}