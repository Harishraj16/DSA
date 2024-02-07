class Solution {
  public:
    string triDownwards(string S) {
        string res=""+S;
        for(int i=0;i<S.length()-1;i++){
            S[i]='.';
            res += S;
        }
        return res;
    }
};
