#include <stdio.h>

int main(){
  //  program to count total number of odd and even number in the array
    int a[10] , i , even = 0, odd =0;
    for(i=0;i<10;i++){
        printf("enter the number\n =");
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0)
        even++;
        else
        odd++;

    }
    printf("number of even is %d and number of odd is %d", even, odd);
    return  0;
}