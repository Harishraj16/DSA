class Solution
{
    public:
        bool check (string s)
        {
        	int n = s.length();
        	for(int i=0;i<n;i++){
        	    if(s[i]!=s[0]) return false;
        	}
        	return true;
        }
};
