class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            set<char> temp;
            for(int i=0;i<A.size();i++){
                if(B.find(A[i])==string::npos) temp.insert(A[i]);
            }
            for(int i=0;i<B.size();i++){
                if(A.find(B[i])==string::npos) temp.insert(B[i]);
            }
            string res(temp.begin(),temp.end());
            if(res.size()==0) return "-1";
            return res;
        }
};
