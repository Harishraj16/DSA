class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    sort(arr,arr+n);
	    vector<int> res;
	    for(int i=0;i<n/2;i++){
	        res.push_back(arr[n-i-1]);
	        res.push_back(arr[i]);
	    }
	    if(n%2!=0) res.push_back(arr[n/2]);
	    return res;
	}

};
