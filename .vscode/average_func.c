#include<stdio.h>
float average(int a, int b,int c) {
    float average=(a+b+c)/3;
    return average;
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Average: %f\n",average(a,b,c)); 
}
