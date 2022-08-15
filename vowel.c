#include<stdio.h>
int main(){
 char ch;
 printf("Enter your vowel : ");
 scanf("%c",&ch);
 if(ch == 'A'|| ch == 'I'||ch == 'O'||ch == 'E'||ch == 'U'){
    printf("Valid vowel");
 }
 else {
    printf("Invalid vowel");
 } 
 return 0;
}

