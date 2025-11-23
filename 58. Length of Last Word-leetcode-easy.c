int lengthOfLastWord(char* s) {
    int n= strlen(s);
    
    int i = n-1;
        while(i >= 0 && isblank(s[i])){
            i--;
        }
    int j = i;

    while(i>=0 && !isblank(s[i])){
        i--;
    }
    int l = i;

    return j-l;
}
