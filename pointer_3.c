#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    int sum=0;
    int tgt;
    for(int i=0; i<5; i++){
        printf("Enter your value: ");
        scanf("%d",ptr+i);
    }
    printf("Enter target value: ");
    scanf("%d",&tgt);
    for(int i=0; i<5; i++){
        if(tgt==*(ptr+i)){
            printf("Found");
        }
        else{
            continue;
        }
    }
}