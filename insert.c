#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5};
    int pos = 0;
    for(int i=6-1; i>=pos; i--){
        arr[i] =arr[i-1];
         arr[pos-1]=50;
    }
    for(int i=0; i<6; i++){
        printf("%d\n ",arr[i]);
    }

}