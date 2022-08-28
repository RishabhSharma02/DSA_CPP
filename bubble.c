#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    for (int  i = 0; i < 5; i++)
    {
        for(int j = 1; j < 5-i; j++){
            if(arr[j-1]>arr[j]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                }
            }
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n",arr[i]);
    }
}