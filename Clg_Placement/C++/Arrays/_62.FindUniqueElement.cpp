class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        for(auto& pair: mpp){
            if(pair.second%k == 1) return pair.first;
        }
        return -1;
    }

};
