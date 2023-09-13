vector<int> generateFibonacciNumbers(int n) {
    if(n==1)
    {
       vector<int>p={0};
       return p;
    }
    if(n==2)
    {
        vector<int>p={0,1};
        return p;
    }
    vector<int>p=generateFibonacciNumbers(n-1);
    int sum=p[n-2]+p[n-3];
    p.push_back(sum);
    return p;
}
