bool isHappy(int n) {
    int seen[1000] = {0};
    while (n != 1) {
        if (seen[n % 1000]) return false;
        seen[n % 1000] = 1;
        int res = 0;
        while (n > 0) {
            int rem = n % 10;
            res += rem * rem;
            n /= 10;
        }
        n = res;
    }
    return true;
}
