class Solution{
    long maxDays(long arr[], int n){
        long maxi = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi) maxi = arr[i];
        }
        return maxi;
    }
}
