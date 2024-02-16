class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        unordered_map<char,int> mpp;
        int maxi = INT_MIN;
        int n = str.length();
        for(int i=0;i<n;i++){
            mpp[str[i]]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();it++){
            maxi = max(maxi,it->second);
        }
        char res='z';
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second==maxi && it->first < res) res = it->first;
        }
        return res;
    }

};
