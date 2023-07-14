// This program calculates the nth term of a sequence by using the memoization technique.
#include <stdio.h>
// represent maximum size of memoization table
// store computed values of sequence terms
// 
#define MAX_SIZE 1000
int memo[MAX_SIZE];

int memoization(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = memoization(n - 3) + memoization(n - 2);
    return memo[n];
}

int main() {
    int n = 10;
    // Initialize memoization table with -1 (indicating values not yet computed)
    for (int i = 0; i < MAX_SIZE; i++)
        memo[i] = -1;

    int result = memoization(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
