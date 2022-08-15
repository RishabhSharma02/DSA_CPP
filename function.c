#include <stdio.h>
void printstar(int n){
   for(int i = 0; i < n;i++){
    printf("*");
   }
}
int main()
{
    int a = 6;
    int b = 8;
    printstar(a);
    return 0;
}