class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n) {
        long int maxi = 0;
        long int count = 1;
        if(n<2) return 1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>arr[i]) count++;
            else count=1;
            maxi = max(maxi,count);
        }
        return maxi;
    }
};
