#include <stdio.h>
int main(){
    //calculate the sum  of even number and producy of odd number
    int a[10], i , sum =0, product = 1;
    for(i=0;i<10;i++){
   printf("enter the number =\n");
   scanf("%d" , &a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0)
        sum= sum +a[i];
        else
        product= product*a[i];

    }
    printf("sum of even  number is %d and produt of odd number is %d" , sum , product);
    return 0;
}