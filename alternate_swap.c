#include<stdio.h>
int main(){
    int i=0;
    int arr[]={1,2,3,4,5,6};
    while (i<5)
    {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i+=2;
    }   
    for(int i=0;i<6;i++){
        printf("%d\n",arr[i]);
    }  
}