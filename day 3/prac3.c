#include<stdio.h>
void main()
{
    char v;
    printf("enter the alphabet :");
    scanf(" %c",&v);
    if(v=='a'|| v=='e'|| v=='i'|| v=='o'|| v=='u')
    {
        printf("vowels");
    }
    else
    {
        printf("consonants");
    }
    return 0;
}