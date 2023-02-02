// Program for converting all lower case letters to upper case and vice versa in the given sentence
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("write your paragraph ");
    gets(str);
    int i, s, c = 0;
    s = strlen(str);
    for (i = 0; i < s; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    for (i = 0; i < s; i++)
    {
    printf("%c", str[i]);
    }
}