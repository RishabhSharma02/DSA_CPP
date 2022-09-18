#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7};
    int i=0;
    int j=6;
    while (i<=j)
    {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
        i++;
        j--;
    }
    for (int k=0; k<7;k++){
       printf("%d\n",arr[k]);
    }
    
}
