class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        int n = S.size();
        string res ;
        res += S[0];
        for(int i=1;i<n;i++){
            if(S[i]!=S[i-1]) res+=S[i];
        }
        return res;
    }
};
