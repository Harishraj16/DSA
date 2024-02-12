class Solution {
    
    public long firstIndex(long arr[], long n)
    {
        long ind = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                ind = i;
                break;
            }
        }
        return ind;
    }
}
