class Solution {
    void nextGreatest(int arr[], int n) {
        int maxi = arr[n-1];
        arr[n-1] = -1;
        for(int i=n-2;i>=0;i--){
           int temp = arr[i];
           arr[i] = maxi;
           maxi = Math.max(maxi,temp);
        }
    }
}
