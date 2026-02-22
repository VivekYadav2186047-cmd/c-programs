#include <stdio.h>
int main(){
    // write a program to check wheather 3 sides can form a valid triangle
    int a , b , c;
    printf("enter side a =");
    scanf("%d" , &a);
     printf("eter side b =");
     scanf("%d" , &b);
     printf("enter side c = ");
     scanf("%d" , &c);
     if(a==b && b==c){
        printf("triangle is equilateral");
     }
     else if(a!=b && b!=c){
        printf("triangle is scalene");
     }
     else{
        printf("trinagle is isosceles");
     }
     return 0;
}