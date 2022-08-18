#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("The elements of the array are is %d\n", &arr[0]);
    printf("The elements of the array are is %d\n", &arr);
    printf("The elements of the array are is %d\n", &arr[1]);
    printf("The elements of the array are %d\n", arr + 1);
    printf("The value at elements of the array are is %d\n", *(&arr[0]));
    printf("The value at elements of the array are is %d\n", *(&arr));
    printf("The value at elements of the array are is %d\n", *(&arr[1]));
    printf("The value at elements of the array are %d", arr + 1);
}