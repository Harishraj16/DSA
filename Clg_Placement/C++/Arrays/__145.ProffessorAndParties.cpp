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

class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        set<long long int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        if(s.size()==n)return "GIRLS";
        return "BOYS";
    }
};
