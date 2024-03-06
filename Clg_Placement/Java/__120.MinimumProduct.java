class Solution {
    
    public long printMinimumProduct(long arr[], long n)
    {
        if (n<2) return arr[0];
        Arrays.sort(arr);
        long result = arr[0]*arr[1];
        return result;
    }
}
