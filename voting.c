#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18){
        printf("valid age ");
    }
    else if(age>0){
        printf("Invalid age ");
    }
    else {
        printf("Please enter a valid age ");
    }
    return 0;
}