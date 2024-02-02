class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	   int a[n];
	   sort(arr,arr+n);
	   int j = 0;
	   for(int i=0;i<n;i++){
	       if(arr[i]%2==0)a[j++]=arr[i];
	   }
	   for(int i=0;i<n;i++){
	       if(arr[i]%2!=0) a[j++]=arr[i];
	   }
	   for(int i=0;i<n;i++){
	       arr[i]=a[i];
	   }
	}
};
