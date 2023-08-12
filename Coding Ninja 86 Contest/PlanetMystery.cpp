int planetMisery(int n, int m){
    // Write your code here
    if(m > n) {
        m = n + 1;
        return m + n;
    }
    else if(n > m){
        n = m + 1;
        return m + n;
    }
    else {
        return m + n;
    }
}