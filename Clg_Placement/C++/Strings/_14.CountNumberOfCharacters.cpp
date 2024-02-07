class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int> res(4,0);
            for(int i=0;i<s.length();i++){
                if('A'<=s[i] && s[i]<='Z') res[0]++;
                else if('a'<=s[i] && s[i]<='z') res[1]++;
                else if(48<=s[i] && s[i]<=57) res[2]++;
                else res[3]++;
            }
            return res;
        }
};

//Another Way:
class Solution {
public:
    vector<int> count(string s) {
        vector<int> res(4, 0);
        for (char c : s) {
            if (isupper(c)) res[0]++;
            else if (islower(c)) res[1]++;
            else if (isdigit(c)) res[2]++;
            else res[3]++;
        }
        return res;
    }
};
