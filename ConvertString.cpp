string convertString(string str) 
{
    for(int i = 0; i < str.length(); i++) {
        if(i == 0) {
            str[i] = toupper(str[i]);
        }
        else if(str[i-1] == ' ') {
            str[i] = toupper(str[i]);
        }        
    }
    return str;
}