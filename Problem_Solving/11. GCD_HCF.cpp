int calcGCD(int n, int m){
    int temp;
    while(m != 0){
        temp = m;
        m = n % m;
        n=temp;
    }
    return n;
}
