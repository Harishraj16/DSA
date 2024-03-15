//287. Find the Duplicate Number
class Solution {
    public int findDuplicate(int[] nums) {
        int n = nums.length;
        int[] temp = Arrays.copyOf(nums,n);
        Arrays.sort(temp);
        for(int i=n-1;i>0;i--){
            if(temp[i]==temp[i-1]) return temp[i];
        }
        return -1;
    }
}
