//2149. Rearrange Array Elements by Sign

class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int[] pos = new int[n/2];
        int[] neg = new int[n/2];
        int pi = 0, ni=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos[pi++] = nums[i];
            else neg[ni++] = nums[i];
        }
        int ind = 0;
        for(int i=0;i<n/2;i++){
            nums[ind++] = pos[i];
            nums[ind++] = neg[i];
        }
        return nums;
    }
}


//-------------------------------------------------------------------------------------------------------------------------
class Solution {
    public int[] rearrangeArray(int[] nums) {
        int[] ans= new int[nums.length];
        int pos=0,neg=1;
        for(int i=0;i<nums.length;i++) {
            if(nums[i]>0) {
                ans[pos]=nums[i];
                pos+=2;
            }
            else {
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return  ans;
    }
}
