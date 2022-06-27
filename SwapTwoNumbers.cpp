#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    pair<int, int> ans;
    
    ans.first = swapValues.second;
    ans.second = swapValues.first;
    
    return ans;
}