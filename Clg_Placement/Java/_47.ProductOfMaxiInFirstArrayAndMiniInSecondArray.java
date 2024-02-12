class Solution{
    
    // Function for finding maximum and value pair
    public static long find_multiplication (int arr[], int brr[], int n, int m) {
        long maxi = Long.MIN_VALUE;
        long mini = Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            maxi = Math.max(maxi,arr[i]);
        }
        for(int i=0;i<m;i++){
            mini = Math.min(mini,brr[i]);
        }
        return mini*maxi;
    }
}
