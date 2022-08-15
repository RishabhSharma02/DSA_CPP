#include<stdio.h>
int main(){
    int a=76;
    int* ptra=&a;
    printf("The value of the variable is  %p ",ptra);
    printf("The value of the pointer is  %p ",&ptra);
}