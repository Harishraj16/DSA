class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int less=0,more=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x) less++,more++;
	        else if(arr[i]<x)less++;
	        else more++;
	    }
	    return {less,more};
	}
};
