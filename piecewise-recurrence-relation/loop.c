// This program calculates the nth term of a sequence by using an iterative approach.
#include <stdio.h>
// use integer parameter n
//  return nth term
// loop to calculate term values
int loop(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    int f0 = 0, f1 = 1, f2 = 2, fn;
    for (int i = 3; i <= n; i++)
    {
        fn = f2 + f1;
        f0 = f1;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

// set variable n
// call Iterative_function with n
// return result
int main()
{
    // set n,
    int n = 10;
    int result = loop(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
