#include <stdio.h>

int main(){
    int year;
printf("enter year =");
scanf("%d" , &year);
if(year%10==0 &&year%100!=0 ||year %400==0)
    

printf("the given year is leap year");
else
printf("not leap year");
return 0;

}
