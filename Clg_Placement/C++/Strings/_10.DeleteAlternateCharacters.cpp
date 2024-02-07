class Solution {
  public:
    string delAlternate(string S) {
        string res="";
        for(int i=0;i<S.length();i+=2){
            res+=S[i];
        }
        return res;
    }
};

//Doing In position;
class Solution {
  public:
    string delAlternate(string S) {
        int readpos = 0;
        int writepos = 0;
        while(readpos<S.length()){
            S[writepos++] = S[readpos];
            readpos+=2;
        }
        S.resize(writepos);
        return S;
    }
};
