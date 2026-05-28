#include <stdio.h>
int main(){
    //program to search a number  in the array
    int a[10] ,i, flag=0, key, position;
    for(i=0;i<10;i++){
        printf("enter the number =");
        scanf("%d" , &a[i]);
    }
    printf("number to be searche" );
    scanf("%d" ,&key);
    for(i=0;i<10;i++){
        if(a[i]==key){
            position = i +1;
            flag = 1;
            break;
        }


    }
    if(flag==1){
        printf("the number found at %d" , position);
    }
    else
    printf("number not found");
    return 0;

}