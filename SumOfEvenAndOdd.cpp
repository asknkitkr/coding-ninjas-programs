vector<int> sumOfEvenOdd(long long num) 
{
    long long e = 0, o = 0;
    while(num != 0) {
        long long x = num%10;
        if(x%2 == 0) {
            e = e+x;
        } else {
            o = o+x;
        }
        num /= 10;
    }
    return {e, o};
}