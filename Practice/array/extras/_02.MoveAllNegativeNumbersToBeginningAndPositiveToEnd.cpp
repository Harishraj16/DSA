//time comp: O(NlogN) because of sorting.
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    sort(nums.begin(),nums.end());
    return nums;
}

//Optimal: O(N)
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int left = 0, right = nums.size()-1;
    while(left <= right){
        while(left<=left && nums[left]<0) left++;
        while(left<=right && nums[right]>=0)right--;
        if(left<=right){
            swap(nums[left++],nums[right--]);
        }
    }
    return nums;
}
