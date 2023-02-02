// Program for finding word count in the Paragraph
#include <stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("write your paragraph ");
    gets(str);
    int i,s,c=0;
    s=strlen(str);
    for(i=0;i<s;i++)
    {
        if(str[i]== ' ')
        {
            c++;
        }
    }
    printf("%d",c+1);

}