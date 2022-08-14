#include<stdio.h>
int main(){
   int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("n1 = %d\n n2 = %d\n n3 = %d\n", n1, n2, n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("n1 is the greatest  \n");
        }
        else
        {
            printf("n3 is the greatest  \n");
        }
    }
    else if (n2 > n3)
        printf("n2 is the greatest \n");
    else
        printf("n3 is the greatest  \n");
   
}