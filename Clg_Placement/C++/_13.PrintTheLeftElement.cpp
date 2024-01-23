class Solution{
    public:
    int leftElement(int a[], int n) {
        sort(a,a+n);
        if(n%2!=0) return a[n/2];
        else if(n%2==0) return a[(n/2)-1];
        return -1;
    }
};
