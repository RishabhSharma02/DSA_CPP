#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    int tgt;
    for(int i=0; i<5; i++){
        printf("Enter your value: ");
        scanf("%d",ptr+i);
    }
    int max=*ptr;
    for(int i=0; i<5; i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
        else{
            continue;
        }
        int c=max;
    }
    printf("Max= %d",max);
    return 0;
}
