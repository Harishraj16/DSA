//Brute force: time:O(n*n)
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

//Better: time: O(N)   space:O(N)
class Solution {
  public:
    string removeChars(string s1, string s2) {
        string res="";
        unordered_map<char,int> mpp;
        for(char &c: s2){
            mpp[c]++;
        }
        for(int i=0;i<s1.length();i++){
            if(mpp.find(s1[i])!=mpp.end()) continue;
            res+=s1[i];
        }
        return res;
    }
};
