Brute force approach:

vector<int> rotateArray(vector<int>arr, int k) {
   int n=arr.size();
   k=k%n;
   int temp[k];
   for(int i=0;i<k;i++){
     temp[i]=arr[i];
   }
   for(int j=k;j<n;j++){
     arr[j-k]=arr[j];
   }
   for(int l=n-k;l<n;l++){
     arr[l]=temp[l-(n-k)];
   }
   return arr;
}


Optimal Solution:

#include<bits/stdc++.h>
vector<int> rotateArray(vector<int>arr, int k) {
   int n=arr.size();
   k=k%n;
   reverse(arr.begin(),(arr.begin()+k));
   reverse(arr.begin()+k,arr.end());
   reverse(arr.begin(),arr.end());
   return arr; 
}

