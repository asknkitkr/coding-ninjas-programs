#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    
    unordered_map<int, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        if(it->second > 1)
            return it->first;
    }
    return -1;
}
