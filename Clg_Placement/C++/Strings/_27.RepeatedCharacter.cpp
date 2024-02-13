class Solution
{
  public:
    char firstRep (string s)
    {
        int n = s.size();
        unordered_map<char,int> mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp.count(s[i]) && mpp[s[i]]>=2) return s[i];
        }
        return '#';
    }
};
