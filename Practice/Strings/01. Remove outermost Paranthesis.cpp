//optimal way 1:
class Solution {
public:
    string removeOuterParentheses(string s) {
        int open = 0, close = 0;
        string res = "";
        int start = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') open++;
            else if(s[i]==')') close++;
            if(open == close){
                res += s.substr(start+1,i-start-1);
                start = i+1;
            }
        }
        return res;
    }
};


//optimal way 2:
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int opened = 0;
        for(char c: s){
            if(c == '(' && opened++ > 0){
                ans+=c;
            }
            if(c == ')' && opened-- > 1){
                ans+=c;
            }
        }
        return ans;
    }
};


//optimal way 3:
class Solution {
public:
    string removeOuterParentheses(string s) {
        std::string str = "";
        int cnt = 0;
        for(auto it : s)
        {
            if(it  == '(')
            {
                if(cnt > 0)
                {
                    str+='(';
                }
                cnt++;
            }
            else
            {
                if(cnt>1)
                {
                    str+=')';
                }
                cnt--;
            }
        }
        return str;
    }
};
