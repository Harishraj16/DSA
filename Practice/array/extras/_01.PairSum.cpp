//Time complexity: O(n*n)
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>result;
   for(int i=0;i<arr.size()-1;i++){
      for(int j=i+1;j<arr.size();j++){
         if(arr[i]+arr[j]==s)result.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
      }
   }
   sort(result.begin(),result.end());
   return result;
}


//Optimal Approach - time comp:O(nlogn)

