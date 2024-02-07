class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        vector<string> res(3,"");
        for(char &c: S){
            if((c>=65 && c<=90) || (c>=97 && c<=122)) res[0]+=c;
            else if(c>=48 && c<=57) res[1]+=c;
            else res[2]+=c;
        }
        return res;
    } 
};



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
