//Optimal Approach: TC:O(N)      SC:O(N)
int findAllSubarraysWithGivenSum(vector < int > & arr, int t) {
    int n=arr.size();
    int cnt=0;
    int sum=0;
    unordered_map<int,int> mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int rem=sum-t;
        cnt += mpp[rem];
        mpp[sum]++;
    }
    return cnt;
}
