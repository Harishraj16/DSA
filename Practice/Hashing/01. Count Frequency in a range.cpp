#include<bits/stdc++.h>

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> freq(n,0);
    for(int i=0;i<n;i++){
        freq[nums[i]-1]++ ;
    }
    return freq;
}
