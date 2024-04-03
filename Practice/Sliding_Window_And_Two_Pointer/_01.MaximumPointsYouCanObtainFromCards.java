//1423. Maximum Points You Can Obtain from Cards

class Solution {
    public int maxScore(int[] nums, int k) {
        int lsum = 0,rsum = 0;
        for(int i=0;i<k;i++){
            lsum += nums[i];
        }   
        int maxsum = lsum;
        int rind = nums.length-1;
        for(int i = k-1;i>=0;i--){
            lsum -= nums[i];
            rsum += nums[rind--];
            maxsum = Math.max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
}
