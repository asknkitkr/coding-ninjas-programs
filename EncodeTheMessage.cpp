string encode(string &message)
{
    int c = 1;
    string ans;
    
    for(int i = 0; i < message.length(); i++) {
        if(message[i] == message[i+1]) {
            c++;
        }
        else {
            ans += message[i] + to_string(c);
            c = 1;
        }
    }
    return ans;
}