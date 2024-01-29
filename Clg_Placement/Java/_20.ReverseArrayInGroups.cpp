class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i;
        if(k>n) k=n;
        for(i=0;i+k<n;i+=k){
            reverse(arr.begin()+i,arr.begin()+i+k);
        }
        reverse(arr.begin()+i,arr.end());
        return;
    }
};
