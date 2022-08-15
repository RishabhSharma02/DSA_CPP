#include <stdio.h>
int recursion(int n1)
{
    if (n1 == 1 || n1 == 0)
    {
        return 1;
    }
    return n1 * recursion(n1 - 1);
}
int main()
{
    printf("Factorial is : %d\n", recursion(0));
}