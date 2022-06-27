int findCase(char ch) {
    if(ch >= 'A' && ch <= 'Z') return 1;
    else if(ch >= 'a' && ch <= 'z') return 0;
    else return -1;
}