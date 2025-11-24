bool palindromeRange(char* s, int left, int right) {
    while (left < right)
     {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
bool validPalindrome(char* s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) 
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        } 
        else 
        {
            return palindromeRange(s, left + 1, right) || palindromeRange(s, left, right - 1);
        }
    }
    return true;
}
