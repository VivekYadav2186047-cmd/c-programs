#include <stdio.h>
int main(){
    //write a program to create a simple calculator
    int a , b , c;
    char op;
    printf("enter your operator = ");
    scanf("%c" ,&op);
    printf("enter the frist number =");
    scanf("%d" ,&a);
    printf("enter the second number =");
    scanf("%d" , &b); 
    
    
    if(op =='+'){
        c  = a + b;
        printf("%d" , c);
    }
    else if(op=='-'){
        c = a - b;
        printf("%d" , c);
    }
    else if(op=='*'){
        c = a*b;
        printf("%d" , c );
    }
    else{
        c = a%b;
        printf("%d" , c);
    }
    return 0;
}