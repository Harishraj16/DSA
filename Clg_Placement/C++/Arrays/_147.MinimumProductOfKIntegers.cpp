class Solution{
    public:
    int minProduct(int arr[], int n, int k)
    {
        long res = 1;
        long mod = 1000000007;
        sort(arr,arr+n);
        for(int i=0;i<k && i<n;i++){
            res *= arr[i];
            res %= mod;
        }
        return (int)res;
    }
};
