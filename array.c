#include<stdio.h>
int main(){
 int marks[4];
for (int i=0; i<4; i++){
     printf("Enter the value of %d element : ",i);
     scanf("%d",&marks[i]);
}
for (int i=0; i<4; i++){
     printf("The value of %d element is %d\n",i,marks[i]);
}
}
