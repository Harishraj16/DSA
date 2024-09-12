class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string res = "";
        int i=0,j=0;
        while(i<strs[0].size() && j<strs[n-1].size()){
            if(strs[0][i]==strs[n-1][j]) res+=strs[0][i];
            else break;
            i++;
            j++;
        }
        return res;
    }
};
