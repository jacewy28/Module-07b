# Profile: Braeden Hemphill 
- **Netid**: bhemph4
- **Major**: CS + Linguistics
- **Question that I chose from the memoization exercise:** [nth Catalan number](https://www.geeksforgeeks.org/dsa/program-nth-catalan-number/)

```c
int findCatalan(int n, int *memo) {
  // I had comments from when I was trying to figure out what the formula was
  // but they don't really make sense since I ended up copying over
  // the one geeks4geeks had.
  if (memo[n] > 0)
    return memo[n];
  if (n == 0) {
    memo[0] = 1;
    return 1;
  }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += findCatalan(i, memo) * findCatalan(n - i - 1, memo);
  }
  memo[n] = sum;
  return sum;
}

```
