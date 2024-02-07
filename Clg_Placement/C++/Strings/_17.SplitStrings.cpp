class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        vector<string> res(3,"");
        for(char &c: S){
            if(isalpha(c)) res[0]+=c;
            else if(isdigit(c)) res[1]+=c;
            else res[2]+=c;
        }
        return res;
    } 
};
