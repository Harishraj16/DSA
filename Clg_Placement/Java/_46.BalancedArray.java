class Solution
{
    long minValueToBalance(long a[] ,int n)
    {
        long left = 0;
        long right = 0;
        for(int i=0;i<n/2;i++){
            left += a[i];
            right += a[n-i-1];
        }
        if(left>right) return left-right;
        else return right-left;
    }
}
