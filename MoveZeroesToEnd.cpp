void pushZerosAtEnd(vector<int> &arr) 
{
	int count = {0}, n = arr.size();
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    
    while(count < n)
        arr[count++] = 0;
}