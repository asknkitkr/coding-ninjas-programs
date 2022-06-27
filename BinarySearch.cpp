int binarySearch(int *arr, int n, int val)
{
    int low = 0, high = n-1;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(arr[mid] == val) {
            return mid;
        }
        else if(arr[mid] < val) {
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    return -1;
}