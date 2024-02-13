class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        int t = 0;
        for(int i=0;i<B.size();i++){
            if(B[i]==A[t]) t++;
        }
        if(t==A.size()) return true;
        else return false;
    }
};
