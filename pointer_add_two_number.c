#include <stdio.h>
int a , b , *p , *q ,c;
int main(){
    printf("enter two number = ");
    scanf("%d%d" , &a , &b);
    p = &a;
    q = &b;
    c = *p + *q;
    printf("reuslt = %d" , c);
    return 0;
}