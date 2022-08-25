#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int key,j;
    for(int i=1 ; i<5 ; i++){
      key=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
      }
      arr[j+1]=key;
    }
    for(int i=0 ; i<5 ; i++){
        printf("\t%d\n",arr[i]);}
      return 0;
}