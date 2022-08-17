#include<stdio.h>
int main(){
    int a=76;
    int* ptra=&a;
    int* ptra2=NULL;
    printf("The value of the variable is  %p ",ptra);
    printf("The value of the pointer is  %p ",&ptra);
    printf("The value of the variable is %p ",ptra2);
}