#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    int sum=0;
    for(int i=0; i<5; i++){
        printf("Enter your value: ");
        scanf("%d",ptr+i);
    }
    for(int i=0; i<5; i++){
        sum=sum+*(ptr+i);
    }
    printf("Sum: %d\n",sum);
}