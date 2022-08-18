#include<stdio.h>
int main(){
    int a=7;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d",ptra+1);
}