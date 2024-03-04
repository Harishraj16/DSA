class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
        sort(arr,arr+n);
        vector<int> temp;
        for(int i=0;i<n/2;i++){
            temp.push_back(arr[i]);
            temp.push_back(arr[n-i-1]);
        }
        if(n%2!=0){
            temp.push_back(arr[n/2]);
        }
        int ind=0;
        for(int it:temp){
            arr[ind++]=it;
        }
    }
};
