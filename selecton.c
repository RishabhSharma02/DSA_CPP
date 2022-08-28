#include<stdio.h>
int main(){
    int arr[6]={5,4,3,2,1,0};
    for(int i=1; i<6; i++){
        int j =i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1] =arr[j];
            j=j-1;
        }
        arr[j+1]=key; 
    }
    for(int i=0; i<6; i++){
        printf(" %d",arr[i]);
    }
}