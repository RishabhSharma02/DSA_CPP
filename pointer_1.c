#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Number:");
    scanf("%d",&a);
    int *ptra=&a;
    printf("Adress: %d\n",ptra);
} 