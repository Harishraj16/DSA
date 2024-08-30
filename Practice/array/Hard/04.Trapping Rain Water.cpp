class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> right_maxi(n,0);
        int maxi = INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi = max(maxi,height[i]);
            right_maxi[i] = maxi;
        }
        int left_maxi = INT_MIN;
        int water = 0;
        for(int i=0;i<n;i++){
            left_maxi = max(left_maxi,height[i]);
            int mini = min(left_maxi,right_maxi[i]);
            int count = mini - height[i];
            water += count;
        }
        return water;
    }
};
