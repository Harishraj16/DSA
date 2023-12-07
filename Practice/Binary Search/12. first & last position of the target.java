class Solution {
    public int[] searchRange(int[] nums, int target) {
        int left = binarysearch(nums,target,true);
        int right = binarysearch(nums,target,false);
        if(left<=right){
            return new int[]{left,right};
        }
        else{
            return new int[]{-1,-1};
        }
    }
    public int binarysearch(int[] nums,int target,boolean findleft){
        int start=0,end=nums.length-1,ans=-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                ans = mid;
                if(findleft){
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
}
