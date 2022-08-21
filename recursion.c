#include <stdio.h>
int factorial(int n1)
{
    if (n1 == 1 || n1 == 0)
    {
        return 1;
    }
    return n1 * factorial(n1 - 1);
}
int main()
{
    printf("Factorial is : %d\n", factorial(5));
}