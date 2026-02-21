#include <stdio.h>

int main(){
    //write a program to check whether a number is +ve , negative or zero
    int a;
    printf("enter a value = ");
    scanf("%d" , &a);
    if(a>0){
        printf("number is positive");
    }
    else if(a==0){
        printf("number is zero");
    }
    else{
        printf("number is negative");
    }
    return 0;
}