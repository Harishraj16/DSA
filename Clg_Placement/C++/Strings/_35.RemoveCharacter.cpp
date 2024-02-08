class Solution {
  public:
    string removeChars(string s1, string s2) {
        string res="";
        for(int i=0;i<s1.length();i++){
            int ind=0;
            while(ind<s2.length()){
                if(s1[i]==s2[ind++]) goto next;
            }
            res += s1[i];
            next: ;
        }
        return res;
    }
};
