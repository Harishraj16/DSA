class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string S1, string S2) 
    { 
        string res="";
        for(int i=0;i<S1.length();i++){
            if(S2.find(S1[i])==string::npos){
                res += S1[i];
            }
        }
        for(int i=0;i<S2.length();i++){
            if(S1.find(S2[i])==string::npos){
                res+= S2[i];
            }
        }
        return res.length()==0?"-1":res;
    }

};
