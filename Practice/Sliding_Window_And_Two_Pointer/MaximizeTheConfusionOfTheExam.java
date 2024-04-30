class Solution {
    public int maxConsecutiveAnswers(String nums, int k) {
        int n = nums.length();
        int maxi = 0;
        int l=0,r=0;
        int tr=0,fl=0;
        int freq = 0;
        while(r<n){
            if(nums.charAt(r)=='T') tr++;
            else fl++;
            freq = Math.max(tr,fl);
            while((r-l+1)-freq > k){
                if(nums.charAt(l)=='T') tr--;
                else fl--;
                l+=1;
                //freq = Math.max(tr,fl);
            }
            maxi = Math.max(maxi,r-l+1);
            r+=1;
        }
        return  maxi;
    }
}
