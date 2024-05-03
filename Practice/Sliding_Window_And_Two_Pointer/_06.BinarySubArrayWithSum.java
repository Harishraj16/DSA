class Solution {
    public int func(int[] nums, int goal){
        int n = nums.length;
        int l=0,r=0;
        int count = 0;
        int sum = 0;
        while(r<n){
            if(goal<0) return 0;
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
    public int numSubarraysWithSum(int[] nums, int goal) {
        System.gc();
        return func(nums,goal) - func(nums,goal-1);
    }
}
