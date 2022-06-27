long long int sumOrProduct(long long int n, long long int q)
{
    const unsigned int m = 1000000007;
    long long int S = 0, M = 1;
	
    if(q == 1) {
        for(int i = 1; i <= n; i++) {
            S += i;
        }
        return S;
    }    
    else if(q == 2) {
        for(int i = 1; i <= n; i++) {
            M = (M*i)%m;
        }
        return M;
    }
    return -1;
}