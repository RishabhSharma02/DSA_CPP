#include<stdio.h>
int main(){
    int roll;
    char gra;
    float percentage;
    scanf("%d",&roll);
    scanf("%f",&percentage);
    scanf("%c",&gra);
    printf("your percentage is %f\n your roll is %d\n your grade is %c ",percentage,roll,gra);
    return 0;
}