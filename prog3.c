#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int  i = 1; i < 11; i++)
    {
        printf("%dx%d=%d\n",i,num,i*num);
    }
    
}