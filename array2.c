#include <stdio.h>
int main()
{
int array[5];
for (int i = 0; i < 5; i++)
{
    scanf("%d", &array[i]);
}
for (int i = 0; i < 5; i++){
    printf("%d\n", array[i]);
}
return 0;
}