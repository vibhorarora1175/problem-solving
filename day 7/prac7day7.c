// Program for concatenation of two strings (User defined function)
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char str[20],str2[20];
//     printf("enter the name :");
//     gets(str);
//     printf("enter the name :");
//     gets(str2);
//     strcat(str,str2);
//     puts(str);
// }
#include <stdio.h>
void main()
{
    char str[20], str2[20], str3[40];
    printf("enter the name :");
    gets(str);
    printf("enter the name :");
    gets(str2);
    int i = 0, s = 0;
    while (str[i] != '\0')
    {
        str3[i] = str[i];
        i++;
        s++;
    }
    int j = s, m = 0, k = 0;
    while (str2[m] != '\0')
    {
        str3[j] = str2[k];
        k++;
        m++;
        j++;
    }
    str3[j]='\0';
    printf("%s", str3);
}
