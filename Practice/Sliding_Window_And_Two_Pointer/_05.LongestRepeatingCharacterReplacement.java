class Solution {
    public int characterReplacement(String s, int k) {
        int maxi = 0;
        int n = s.length();
        int l=0,r=0;
        int[] hash = new int[26];
        int freq = 0;
        while(r<n){
            hash[s.charAt(r)-'A']++;
            freq = Math.max(freq,hash[s.charAt(r)-'A']);
            while((r-l+1)-freq > k){
                hash[s.charAt(l)-'A']--;
                l++;
            }
            maxi = Math.max(maxi,r-l+1);
            r+=1;
        }
        return maxi;
    }
}
