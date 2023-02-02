#include<stdio.h>
void main()
{
    int month;
    int year;
    int date;
    int monthvalue,yearvalue,lastvalue,secondlastvalue,valueuse,lasttask,ans,ans1;
    printf("Enter the date from 1900 to 2099 in formate(dd/mm/yy):\n");
    printf("Enter the date:");
    scanf("%d",&date);
    printf("Enter month:");
    scanf("%d",&month);
    printf("Enter year:");
    scanf("%d",&year);
    if(month == 01){
         monthvalue=0;
    }
    else if(month==02){
        monthvalue=3;
    }
    else if(month==03){
        monthvalue=3;
    }
     else if(month==04){
        monthvalue=6;
    }
    else if(month==05){
        monthvalue=1;
    }
     else if(month==06){
        monthvalue=4;
    }
     else if(month==07){
        monthvalue=6;
    }
     else if(month==8){
        monthvalue=2;
    }
     else if(month==9){
        monthvalue=5;
    }
     else if(month==10){
        monthvalue=0;
    }
     else if(month==11){
        monthvalue=3;
    }
     else if(month==12){
        monthvalue=5;
    }
     else{
        printf("Invalid month");
    }
    // assigning value for year;

    if(1900<year<1999){
        yearvalue = 0;
    }
    else if (2000<year<2099){
        yearvalue= 6;
    }
    else{
        printf("out of year");
    }
    // last number for the year
    lastvalue= year%10;
    year= year/10;
    secondlastvalue= year%10;
    valueuse= secondlastvalue*10+lastvalue;
    lasttask= valueuse/4;
    // process;
    ans= date+monthvalue+yearvalue+valueuse+lasttask;
    ans1= ans%7;
    switch(ans1-1){
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:printf("invalid option");
    }
}