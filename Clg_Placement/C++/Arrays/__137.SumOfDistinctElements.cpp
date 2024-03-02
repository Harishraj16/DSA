class Solution{
public:	
	// Find the sum of all non-repeated elements
	// in an array
	int findSum(int arr[], int n) {
	    unordered_map<int,int>mpp;
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        if(mpp.find(arr[i])==mpp.end()){
	            sum += arr[i];
	            mpp[arr[i]]++;
	        }
	    }
	    return sum;
	}
};
