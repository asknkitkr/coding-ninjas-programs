string encodeString(string &s, int n) 
{
    for(int i = 0; i < n; i++) {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            s[i] = s[i] + 1;
        }
        else if(s[i] == 'a') {
            s[i] = 'z';
        }
        else {
            s[i] = s[i]-1;
        }
    }
    return s;
}
