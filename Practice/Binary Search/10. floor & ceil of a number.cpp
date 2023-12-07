//Time: O(logN)

int findfloor(vector<int> &a,int n,int x){
	int start=0,end=n-1,ans=-1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(a[mid]<=x){
			ans=a[mid];
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
}

int findceil(vector<int> &a,int n,int x){
	int start=0,end=n-1,ans=-1;
	while(start<=end){
		int mid = start+(end-start)/2;
		if(a[mid]>=x){
			ans = a[mid];
			end = mid-1;
		}
		else{
			start = mid+1;
		}
	}
	return ans;
}


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int f=findfloor(a,n,x);
	int c=findceil(a,n,x);
	return {f,c};
}
