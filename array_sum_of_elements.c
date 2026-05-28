#include <stdio.h>
int main(){
    //program to finsd the sum  of elements of the array
    int a[10],i,sum=0;
    for(i=0;i<10;i++){
        printf("enter number\n");
        scanf("%d" ,&a[i]);
    }
    for(i=0;i<10;i++){
        sum = sum + a[i];
    }
    printf("sum of array numer is %d\n" ,sum);
    return 0;

}