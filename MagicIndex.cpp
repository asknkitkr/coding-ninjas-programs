int magicIndex(vector<int> a, int n) {
	for(int i = 0; i < n; i++) {
        if(a[i] == i)
            return i;
    }
    return -1;
}
