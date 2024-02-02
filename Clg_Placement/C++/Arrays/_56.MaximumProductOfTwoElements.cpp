//better solution: O(NlogN)
class Solution{
public:

	int maxProduct(int arr[], int n) {
	    sort(arr,arr+n);
	    return arr[n-1]*arr[n-2];
	}
};


//Optimal solution:   Time:O(N)
class Solution{
public:

	int maxProduct(int arr[], int n) {
	    int greatest = INT_MIN;
	    int secondgreatest = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>greatest){
	            secondgreatest = greatest;
	            greatest = arr[i];
	        }
	        else if(arr[i]>secondgreatest){   
	            /* in else if dont do like
               (arr[i]>secondgreatest && arr[i]!=greatest)
               because same two numbers(duplicates) can be 
               multiplied to get greatest sum*/
	            secondgreatest = arr[i];
	        }
	    }
	    return greatest*secondgreatest;
	}
};
