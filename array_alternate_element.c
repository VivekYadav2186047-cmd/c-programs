#include <stdio.h>
//program to print alternate number
int main(){
    int a[10], i ;
    for(i=0;i<10;i++){
        printf("enter number =");
        scanf("%d" , &a[i]);

    }
    for(i=0;i<10;i = i +2){
        printf("%d\n" , a[i]);
    }
    return 0;
    
}