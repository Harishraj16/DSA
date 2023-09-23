//Better Solution[O(n log n)]:
#include<bits/stdc++.h>
vector<int> getSecondOrderElements(int n, vector<int> a) {
    if (n < 2) {
        return {};
    }

    sort(a.begin(), a.end());

    int secondSmallest = a[1];
    int secondLargest = a[n - 2];

    return {secondLargest,secondSmallest};
}


//optimal Solution [O(n)]:

#include <vector>

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    if (n < 2) {
        // Handle the case where the vector has fewer than 2 elements.
        // You can return an empty vector or handle it as needed.
        return {};
    }

    int smallest = a[0];
    int secondSmallest = INT_MAX;
    int largest = a[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }

        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    return {secondSmallest, secondLargest};
}

//Leetcode (Check if array is sorted and rotated):
//Brute Force -> Rotate and Check:  Time comp=O[nlogn]  space comp=O[n]

class Solution {
public:
    void rotate(vector<int> &nums,int k){
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
    }
    bool check(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        for(int i=0;i<nums.size();i++){
           vector<int> temp_nums=nums;
            rotate(temp_nums,i);
            if(temp_nums==temp){
               return true;
            }
        }
        return false;
    }
};

//Optimal Code: Time comp=O[n]  space comp=O[1]

class Solution {
public:
    bool check(vector<int> &nums){
        int count=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};
