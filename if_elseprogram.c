#include <stdio.h>
int main(){
    //write a program to check if a given character is alphabet , digit or special character
    char x;
    printf("enter a letter = ");
    scanf("%d" , &x);
    if(x=='a' || x=='e'|| x=='i' || x=='o' || x=='u' ){
        printf("enter letter is vowel");

    }
    else{
        printf("enter letter is consonant");
    }
    return 0;
}