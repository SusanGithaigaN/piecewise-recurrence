// This program calculates the nth term of a sequence by using a recursive approach.
#include <stdio.h>

int Recursive_function(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return Recursive_function(n - 3) + Recursive_function(n - 2);
}

int main()
{
    int n = 10;
    int result = Recursive_function(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
