#include <stdio.h>

int main(){
    // to check enter numbers are equal or not
    int a , b;
    printf("enter two value =");
    scanf("%d%d" , &a , &b);
    if(a==b){
        printf("number are equals");
    }
    else{
        printf("numbers are not equal");
    }
    return 0;
    }
