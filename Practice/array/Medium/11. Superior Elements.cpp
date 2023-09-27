//Brute force Approach:  Time:O(N^2)         Space:O(N) 

#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int arr[], int n) {

  vector<int> ans;
  
  for (int i = 0; i < n; i++) {
    bool leader = true;

    //Checking whether arr[i] is greater than all 
    //the elements in its right side
    for (int j = i + 1; j < n; j++)
      if (arr[j] > arr[i]) {
          
        // If any element found is greater than current leader
        // curr element is not the leader.
        leader = false;
        break;
      }

    // Push all the leaders in ans array.
    if (leader)
    ans.push_back(arr[i]);

  }
  
  return ans;
}

int main() {
    
  // Array Initialization.
  int n = 6;
  int arr[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeadersBruteForce(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}


//Optimal Approach:  Time:O(N)  Space:O(N)

vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
    }
    //sort(ans.begin(),ans.end());
    return ans;
}
