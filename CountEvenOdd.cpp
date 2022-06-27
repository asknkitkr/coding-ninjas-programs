#include<bits/stdc++.h>
vector<int> countEvenOdd(vector<int> &arr, int n)
{
    int odd = 0, even = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    for(auto x: mp) {
        if((x.second)%2 == 0) even++;
        else odd++;
    }
    return {odd, even};
}
