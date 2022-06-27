long long Pow(int X, int N)
{
    // Write your code here. 
    long long ans = 1;
    for(int i = 1; i <= N; i++) {
        ans *= X;
    }
    return ans;
}