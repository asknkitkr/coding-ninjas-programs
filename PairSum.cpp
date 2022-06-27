vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> ans;
   sort(arr.begin(), arr.end());
    
   for(int i = 0; i < arr.size(); i++) {
       for(int j = i+1; j < arr.size(); j++) {
           if(arr[i]+arr[j] == s) {
               ans.push_back(vector<int> {arr[i], arr[j]});
           }
       }
   }
    return ans;
}