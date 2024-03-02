class Solution{
public:	
	void reverseSubArray(int *arr, int n, int l, int r) {
	    int left = l-1;
	    int right = r-1;
	    int mid = (left+right)/2;
	    while(left<=mid){
	        swap(arr[left++],arr[right--]);
	    }
	}

};
