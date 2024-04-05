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



//Time: O(2n)  Space:O(1)
class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int l=0,r=0;
        int zero = 0;
        int maxlen = 0;
        while(r<n){
            if(nums[r]==0) zero++;
            if(zero>k){
                while(zero>k){
                    if(nums[l]==0) zero--;
                    l++;
                }
            }
            maxlen = Math.max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
}



//Time: O(n)    Space:O(1)
class Solution {
    public int longestOnes(int[] nums, int k) {
        int l=0,r=0;
        int n=nums.length;
        int maxlen = 0;
        int zero = 0;
        while(r<n){
            if(nums[r]==0) zero++;
            if(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            if(zero<=k){
                maxlen = Math.max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
}
