class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		unordered_map<int,int> mpp;
		for(int i=0;i<n;i++){
		    mpp[arr[i]]++;
		}
		int range = (B-A)+1;
		for(int i=0;i<range;i++){
		    if(mpp.find(A++)==mpp.end()) return false;
		}
		return true;
	}
};
