class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) {
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i=0;i<N;i++){
            if(mpp.find(A[i])==mpp.end()){
                mpp[A[i]]++;
                res.push_back(A[i]);
            }
        }
        return res;
    }
};
