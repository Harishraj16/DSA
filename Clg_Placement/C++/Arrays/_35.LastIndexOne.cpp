class Solution{
    public:
    int lastIndex(string s) 
    {
        for(int i=s.size();i>=0;i--){
            if(s[i]=='1') return i;
        }
        return -1;
    }

};
