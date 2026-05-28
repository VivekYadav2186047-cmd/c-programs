#include <stdio.h>
void aarayadd(int[], int);
int main(){
    int a[100] , size , i;
    printf("enter the size of array");
    scanf("%d", &size);
    for(i=0;i<size;i++){
        printf("enter the nuber");
        scanf("%d", &a[i]);
    }
    arrayadd(a,size);
    return 0;
}
void arrayadd(int a[],int size){
int sum =0, i;
for(i=0;i<size;i++){
    sum = sum + a[i];
}
printf("sum of element is %d" , sum);
}

