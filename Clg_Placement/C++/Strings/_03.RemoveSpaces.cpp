class Solution
{
  public:
    string modify (string s)
    {
        string str;
        int ind = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
        }
        return str;
    }
};
