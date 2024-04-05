//1004. Max Consecutive Ones III

//Time:  not n^2 but near to that O(n*n)  Space:O(1)
class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int maxlen = 0;
        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=i;j<n;j++){
                if(nums[j]==0) temp++;
                if(temp>k) break; 
                maxlen = Math.max(maxlen,j-i+1);
            }
        }
        return maxlen;
    }
}
