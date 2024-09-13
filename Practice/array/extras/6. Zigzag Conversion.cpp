class Solution {
public:
    string convert(string s, int n) {
        if (n == 1) return s;
        string res="";
        string ds[n];
        int t = 0;
        bool flag = true;
        for(int i=0;i<s.size();i++){
            ds[t]+=s[i];
            if(flag) t++;
            else t--;
            if(t==n-1) flag = false;
            if(t==0) flag = true; 
        }
        for(string st: ds){
            res+=st;
        }
        return res;
    }
};
