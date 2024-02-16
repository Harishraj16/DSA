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


//Optimal Way:
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
           vector<int> freqA(26,0),freqB(26,0);
           
           for(char c: A){
               freqA[c-'a']++;
           }
           for(char c: B){
               freqB[c-'a']++;
           }
           string res="";
           for(int i=0;i<26;i++){
               if((freqA[i]>0 && freqB[i]==0)){
                   res+=(char)(i+'a');
               }
               else if (freqA[i]==0 && freqB[i]>0){
                   res+=(char)(i+'a');
               }
           }
           return res.size()==0?"-1":res;
        }
};
