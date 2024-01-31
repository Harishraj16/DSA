class Solution {
    public static int chocolates(int n, int[] arr) {
        int small = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            small = Math.min(small,arr[i]);
        }
        return small;
    }
}
