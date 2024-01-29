//Using Unordered_map:
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


//Using bool array:
bool check_elements(int arr[], int N, int A, int B) {
    // Initialize a boolean array to mark the presence of elements in the given range
    bool present[B - A + 1] = {false};

    // Traverse the array and mark elements in the given range
    for (int i = 0; i < N; i++) {
        if (arr[i] >= A && arr[i] <= B) {
            present[arr[i] - A] = true;
        }
    }

    // Check if all elements in the range are present
    for (int i = 0; i <= B - A; i++) {
        if (!present[i]) {
            return false;
        }
    }

    return true;
}
