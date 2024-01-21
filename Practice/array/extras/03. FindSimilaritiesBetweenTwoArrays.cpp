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
