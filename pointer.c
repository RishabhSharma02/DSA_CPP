#include<stdio.h>
int main(){
    int arr[5];
    int* ptra;
    ptra=arr;
    int* ptra2=NULL;
    printf("The value of the variable is  %u ",ptra);
    printf("The value of the pointer is  %p ",&ptra);
    printf("The value of the variable is %p ",ptra2);
}