class Solution
{
    public:
        string modify (string s)
        {
            int n = s.length();
            int l = 0;
            int r = n-1;
            while(l<r){
                while(l<r && s[l]!='a' && s[l]!='e' && s[l]!='i' && s[l]!='o' && s[l]!='u'){
                    l++;
                }
                while(l<r && s[r]!='a' && s[r]!='e' && s[r]!='i' && s[r]!='o' && s[r]!='u'){
                    r--;
                }
                swap(s[l],s[r]);
                l++;
                r--;
            }
            return s;
        }
