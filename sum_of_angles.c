#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter the angles\n:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a+b+c==180){
        printf("Valid angles ");
    }
    else
    printf("Invalid angles ");    
   return 0;
}