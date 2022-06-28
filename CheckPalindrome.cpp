bool isPalindrome(string &s)
{
	int l = 0, h = s.length()-1;
    
    while(l < h) {
        if(s[l++] != s[h--]) return false;
    }
    return true;
}