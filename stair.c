#include <stdio.h>
#include <stdlib.h>

static int count_ways(int n, int memo[])
{
    if (n == 0 || n == 1) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = count_ways(n - 1, memo) + count_ways(n - 2, memo);
    return memo[n];
}

int main(void)
{
    int n;
    int *memo;
    int result;

    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    memo = malloc((size_t)(n + 1) * sizeof(*memo));
    if (memo == NULL) {
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        memo[i] = -1;
    }

    result = count_ways(n, memo);
    free(memo);
    printf("%d\n", result);
    return 0;
}
