// Sort the Given city names in dictionary order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100][100], s[100];
int n;
printf("Enter the number of cities:\n");
scanf("%d", &n);
printf("Enter the city names:\n");
for(int i=0;i<n;i++)
scanf("%s",str[i]);
int k=0;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
            k++;
        }
    }
}
printf("the Given city names in dictionary order:\n");
for(int i=0;i<n;i++)
printf("%s\t",str[i]);
return 0;
}