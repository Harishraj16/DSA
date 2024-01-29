class Solution{
public:	
	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeating(int *arr, int n, int k) {
	    int maxifirst = INT_MIN;
	    int maxiind = INT_MIN;
	    unordered_map<int,int>mpp;
	    for(int i=0;i<n;i++){
	        mpp[arr[i]]++;
	    }
	    for(auto it: mpp){
	        if(it.second>maxiind){
	            maxiind = it.second;
	            maxifirst = it.first;
	        }
	        if(it.second==maxiind && it.first<maxifirst){
	            maxifirst = it.first;
	        }
	    }
	    return maxifirst;
	}

};
