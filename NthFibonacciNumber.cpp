int fibonacciNumber(int n){
    const int unsigned M = 1000000007;
    
    long long int a = 0, b = 1;
    long long int next = a+b;
    
    for(int i = 3; i <= n; ++i) {
        a = b;
        b = next;
        next = (a+b)%M;
    }
    return next;
}