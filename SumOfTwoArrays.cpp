vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int s1 = 0;
    for(int i = 0; i < n; i++) {
        s1 = (s1*10) + a[i];
    }
    
    int s2 = 0;
    for(int i = 0; i < m; i++) {
        s2 = (s2*10) + b[i];
    }
    
    int t = s1+s2;
    vector<int> ans;
    while(t != 0) {
        int r = t%10;
        ans.push_back(r);
        t /= 10;
    }
    
    reverse(ans.begin(), ans.end());
    return ans;
}