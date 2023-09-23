#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

//Leetcode (Rotate array to right by K steps):
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      k=k%nums.size(); /* when the k value exceeds the size of nums[]  
        eg Qn: rotate the array right to 8 steps but arr size is 7.
        k= 8 % 7 -> k=1 now, you can understand the concept behind this */

      reverse(nums.begin(),(nums.begin()+nums.size()-k));
      reverse((nums.begin()+nums.size()-k),nums.end());
      reverse(nums.begin(),nums.end());
    }
};
