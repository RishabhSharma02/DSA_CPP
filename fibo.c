#include<stdio.h>
int fibo(int n){
    if(n<2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
  printf("Fibonacci sum: %d\n", fibo(5));
}
