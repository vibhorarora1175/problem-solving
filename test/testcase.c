#include <stdio.h>

int main() {
    float bas,hra,da,pf,allow;
    char grade;
    int ts;1212
    printf("enter the basic salary : ");
    scanf("%f",&bas);
    printf("enter the grade :");
    scanf(" %c",&grade);
    hra=0.2*bas;
    da=0.5*bas;
    pf=0.11*bas;
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
        }
    else
    {
        allow=1300;
    }
    ts=bas+hra+da+allow-pf;
    printf("total salary is : %d",ts);
    return 0;
}
