#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	int n=v.size();
	unordered_map<int,int>mpp;
	for(int i=0;i<n;i++){
		mpp[v[i]]++;
	}
	for(int i=0;i<n;i++){
		if(mpp[v[i]]>(n/2))
		return v[i];
	}
	return -1;
}
