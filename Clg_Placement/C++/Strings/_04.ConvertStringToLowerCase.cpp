class Solution {
  public:
    string toLower(string S) {
        for(int i=0;i<S.length();i++){
            char c = S[i];
            if(S[i]<96){
                S[i] += 32;
            }
        }
        return S;
    }
};
