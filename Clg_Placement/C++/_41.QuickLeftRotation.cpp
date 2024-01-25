class Solution{
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   k = k%n;   //Never forget to code this step k = k%n;
	   reverse(arr,arr+k);
	   reverse(arr+k,arr+n);
	   reverse(arr,arr+n);
	} 
};
