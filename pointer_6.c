#include<stdio.h>
int main(){
    char str[50];
    char* ptr;
    ptr = str;
    printf("Enter the string to print :");
    scanf("%s", str);
    int c=0;
    while(*ptr!="\0"){
    c++;
    ptr+=1;
    }
    printf("length: %d\n", c);
    return 0;
}