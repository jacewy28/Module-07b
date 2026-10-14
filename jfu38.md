- **NetID:** [jfu38]
- **Major:** [data science]
- **Question that I chose from the memoization exercise:** [Nth Fibonacci number]
- **Link to the question article:** [https://www.geeksforgeeks.org/dsa/program-for-nth-fibonacci-number/#expected-approach1-memoization-approach-on-time-and-on-space]
- **My solution:**

\```

int nthFibonacciMemo(int n, int* memo) { // separate function for memoization
    // code here
    if(memo[n] >= 0) return memo[n];
    if(n<= 1){
        memo[n] = n;
        return n;
    }
    
    int res = nthFibonacci(n-1, memo) + nthFibonnaci(n-2, memo);
    memo[n] = res;
    return res;
        
}

int nthFibonacci(int n){
    int memo[n+1];
    for(int i = 0; i<= n; i++){
        memo[n] = -1;
    }
    return nthFibonnaci(n, memo);
}



\```
