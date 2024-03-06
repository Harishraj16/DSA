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


//MOST OPTIMAL WAY:
class Solution {
    public long printMinimumProduct(long arr[], long n)
    {
        long min1 = Long.MAX_VALUE;
        long min2 = Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(arr[i]<min1){
                min2=min1;
                min1=arr[i];
            }
            else if (arr[i]>=min1 && arr[i]<min2) min2=arr[i];
        }
        return min1*min2;
    }
}
