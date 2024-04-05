//3. Longest Substring Without Repeating Characters

//Time: O(n*n) Space: O(256)
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int longest = 0;
        int n = s.length();
        char[] ch = s.toCharArray();
        for(int i=0;i<n;i++){
            int hash[] = new int[255];
            for(int j=i;j<n;j++){
                hash[ch[j]]++;
                if (hash[ch[j]]>1) break;
                longest = Math.max(longest,j-i+1);
            }
        }
        return longest;
    }
}

//Time: O(n) Space: O(256)
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        char[] ch = s.toCharArray();
        int l=0,r=0,maxlen=0;
        int[] hash = new int[256];
        Arrays.fill(hash,-1);
        int len = 0;
        while(r<n){
            if(hash[ch[r]]!=-1){
                if(hash[ch[r]]>=l){
                    l = hash[ch[r]]+1; 
                }
            }
            len = r-l+1;
            maxlen = Math.max(len,maxlen);
            hash[ch[r]] = r;
            r++;
        }
        return maxlen;
    }
}
