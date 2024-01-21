//Optimal: time: O(N+M)  space:O(N)
#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	int inter=0,u=0;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr1[i]]++;
	}   
	for(int i=0;i<m;i++){
		if(mp.find(arr2[i])!=mp.end()){
			inter++;
		}
		else{
			u++;
		}
	}
	return {inter,mp.size()+u};
}

//Optimal: time: O(N+M)  space:O(N)
#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	    unordered_set<int> set1(arr1.begin(),arr1.end());
		int common_count = 0;
		for(int num: arr2){
			if(set1.count(num)>0) common_count++;
		}    
		int un = arr1.size()+arr2.size()-common_count;
		return {common_count,un};
}
