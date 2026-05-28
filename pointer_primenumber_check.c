#include <stdio.h>
int main(){
    int i , n,*p , count = 0;
    printf("enter the number to be checked");
    scanf("%d", &n);
    p = &n;
    for(i=1;i<=*p;i++){
        if(*p%i==0)
        count ++;
}
if(count==2)
printf("number is prime");
else
printf("not prime");
return 0;
}