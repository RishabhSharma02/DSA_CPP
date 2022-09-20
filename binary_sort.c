#include<stdio.h>
#include <limits.h>
int main(){
    int arr[]={1,2,3,4,5,7};
    int arr1[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
           int element=arr[i];
           for(int j=0;j<6;j++){
            if(element==arr1[j]){
            printf("%d\n",element);
            arr1[j]=INT_MIN;
            break;
            }
    }
}
}