bool isPalindrome(int x) {
     long rev = 0, temp = x; 
    for(; temp; temp /= 10) 
        rev = rev * 10 + (temp % 10);
    
    return (x >= 0) && (x == rev);
}
