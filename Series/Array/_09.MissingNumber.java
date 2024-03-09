//268. Missing Number
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int target = n*(n+1)/2;
        return target-sum;
    }
}

class Solution {
    public int missingNumber(int[] nums) {
        int xor1 = 0;
        int xor2 = 0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            xor2 ^= nums[i];
            xor1 ^= (i+1);
        }
        return xor1^xor2;
    }
}
