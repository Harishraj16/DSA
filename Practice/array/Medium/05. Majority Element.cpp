//Better Solution:

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

//optimal Solution:

int majorityElement(vector<int> v) {
	int count=0;
	int el;
	
	for(int i=0;i<v.size();i++){
		if(count==0){
			count=1;
			el=v[i];
		}
		
		else if(v[i]==el)
		count++;

		else
		count--;
	}
	int count1=0;
	for(int i=0;i<v.size();i++){
		if(el==v[i]) count1++;
	}
	if(count1>(v.size()/2)) 
	return el;
}
