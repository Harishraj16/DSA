class Solution
{
    public:
    string reverseWord(string S)
    {
        int n = S.length();
        for(int i=0;i<n/2;i++){
            char temp = S[i];
            S[i] = S[n-i-1];
            S[n-i-1] = temp;
        }
        return S;
    }
};
