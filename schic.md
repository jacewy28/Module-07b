Name: Sarayu
Major: Data Science
Favorite CS Topic: Git and GitHub
Challenging Topic: Recursion and Memoization No newline at end of file
- **NetID:** schic
- **Major:** Data Science
- **Question that I chose from the memoization exercise:** nth Fibonacci number
- **Link to the question article:** https://www.geeksforgeeks.org/dsa/program-for-nth-fibonacci-number/#expected-approach1-memoization-approach-on-time-and-on-space
- **My solution:**
- \```
- int fibUtil(int n, int arr[]){
    int ret = -1;
    
    if(n<=1){
        ret = n;
        if(arr[n] == -1){
            arr[n] = ret;
        }
        return ret;
    }
    if(arr[n] != -1 && ret == -1){
        ret = arr[n-1];
        return ret;
    }
    if(arr[n-2] != -1 && arr[n-1] != -1 && ret == -1){
        ret = arr[n-2]+arr[n-1];
    }
    else if((arr[n-2] != -1 || arr[n-1] != -1) && ret == -1){
        if(arr[n-2] != -1){
            ret = arr[n-2]+fibUtil(n-1,arr);
        }
        else{
            ret = fibUtil(n-2,arr)+arr[n-1];
        }
    }
    else{
        ret = fibUtil(n-2, arr)+fibUtil(n-1,arr);
    }
    
    if(arr[n] == -1){
        arr[n] = ret;
    }
    return ret;
}

int nthFibonacci(int n) {
    // code here
    int arr[n+1];
    for(int i = 0; i<n+1;i++){
        arr[i] = -1;
    }
    return fibUtil(n, arr);
}
\``
