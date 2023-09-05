brute force solution:


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int sum=nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};



Better Solution:

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mpp;
       for(int i=0;i<nums.size();i++){
           int number=nums[i];
           int needmore= target-number;
           if(mpp.find(needmore) != mpp.end()){
               return {mpp[needmore],i};
           }
           mpp[number]=i;
       }
      return {-1,-1};
    }
};
