#include <stdio.h>
int main(){
    int a , *p ;
    printf("enter the number = ");
    scanf("%d" , &a);
    p = &a;
    if(*p%2==0){
        printf("number is even");
    }
    else
    printf("not even");
    return 0;
}