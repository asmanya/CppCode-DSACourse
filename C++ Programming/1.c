#include <stdio.h>
int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}
int main()
{
    int i;
    printf("put the value of the number\n");
    scanf("%d", &i);
    printf("Factorial of %d is %d\n", i, factorial(i));
    return 0;
}