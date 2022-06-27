vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int p = 0, q = 0;
    vector<int> ans;
    
    while(p < n && q < m) {
        if(arr1[p] == arr2[q]) {
            ans.push_back(arr1[p]);
            p++; q++;
        }
        else if(arr1[p] < arr2[q]) p++;
        else q++;
    }
    return ans;
}