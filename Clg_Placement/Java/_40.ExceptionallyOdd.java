class Solution {
    int getOddOccurrence(int[] arr, int n) {
        int res = 0;           //0^0=0 0^1=1 1^1=0
        for(int i=0;i<n;i++){
            res ^= arr[i];
        }
        return res;
    }
}
