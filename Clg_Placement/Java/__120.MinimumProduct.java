//Brute Way:
class Solution {
    
    public long printMinimumProduct(long arr[], long n)
    {
        long product = Long.MAX_VALUE;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                long temp = arr[i]*arr[j];
                product = Math.min(product,temp);
            }
        }
        return product;
    }
}


//optimal way:
class Solution {
    
    public long printMinimumProduct(long arr[], long n)
    {
        if (n<2) return arr[0];
        Arrays.sort(arr);
        long result = arr[0]*arr[1];
        return result;
    }
}
