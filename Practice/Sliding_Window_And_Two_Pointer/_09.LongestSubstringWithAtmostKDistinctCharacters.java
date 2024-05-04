class Solution {
    public int longestkSubstr(String s, int k) {
        // HashMap<Character,Integer> mpp = new HashMap<>();
        // int r = 0,l=0;
        // int n = s.length();
        // int ans = -1;
        // while(r<n){
        //     mpp.put(s.charAt(r),r);
        //     if(mpp.size()==k){
        //         ans = Math.max(ans,r-l+1);
        //     }
        //     if(mpp.size()>k){
        //         int temp = mpp.get(s.charAt(l));
        //         mpp.remove(s.charAt(l));
        //         l = temp+1;
        //     }
        //     r+=1;
        // }
        // return ans;
        
        int n = s.length();
        HashMap<Character,Integer> mpp = new HashMap<>();
        int maxi = -1;
        int l=0,r=0;
        while(r<n){
            mpp.put(s.charAt(r),mpp.getOrDefault(s.charAt(r),0)+1);
            if(mpp.size()==k){
                maxi = Math.max(maxi,r-l+1);
            }
            while(mpp.size()>k){
                mpp.put(s.charAt(l), mpp.get(s.charAt(l)) - 1);
                if(mpp.get(s.charAt(l))==0)mpp.remove(s.charAt(l));
                l+=1;
            }
            r+=1;
        }
        return maxi;
        
    }
}
