#include <stdio.h>
// program to print array element in reverse element 
int main(){
    int a[10] , i;
    for(i = 0;i<10;i++){
        printf("enter the number=");
        scanf("%d" , &a[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d\n", a[i]);
    }
    return 0;
}