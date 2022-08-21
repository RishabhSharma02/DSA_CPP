#include<stdio.h>
int reverse(int array[],int size) {
    int *ptr1 = array,
        *ptr2 = array + size - 1;
    while (ptr1 < ptr2) {
        swap(ptr1, ptr2);
        ptr1++;
        ptr2--;
    }
}
int swap(int *x,int*y){
    int temp=*x;
    *x = *y;
    *y = temp;
}
int print(int* array, int size){
    int *length = array + size,
        *position = array;
        printf("Array =");
    for (position = array; position < length; position++)
        printf("%d ",*position);

}

int main()
{
    int array[] = { 2, 4, -6, 5, 8, -1 };
 
    printf(" Original Array =");
    print(array, 6);
 
    printf("Reverse array");
    reverse(array, 6);
    print(array, 6);
    return 0;
}