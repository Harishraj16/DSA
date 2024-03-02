class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        unordered_map<long long int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        for(auto &pair: mpp){
            if(pair.second>1) return "BOYS";
        }
        return "GIRLS";
    }
};
