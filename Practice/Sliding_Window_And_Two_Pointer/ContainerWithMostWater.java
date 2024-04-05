//11. Container With Most Water

class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int l=0, r = n-1;
        int maxWater = 0;
        while(l<r){
            int mini = Math.min(height[l],height[r]);
            maxWater = Math.max(maxWater,mini*(r-l));
            while(l<r && height[l]<=mini) l++;
            while(l<r && height[r]<=mini) r--;
        }
        return maxWater;
    }
}
