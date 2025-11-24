int longestPalindrome(char* s) {
    bool occArr[256] = {0};
    uint32_t count = 0;
    uint8_t oddoc = 0;

    while(*s) {
        if(occArr[*s]) {
            occArr[*s] = 0;
            count += 2;
            oddoc--;
        }
        else {
            occArr[*s] = 1;
            oddoc++;
        }
        s++;
    }
    if(oddoc)
        count++;

    return count;
}
