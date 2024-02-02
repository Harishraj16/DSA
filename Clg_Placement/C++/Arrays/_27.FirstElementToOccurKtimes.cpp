class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
            if(mpp[a[i]]>=k) return a[i];
        }
        return -1;
    }
};
