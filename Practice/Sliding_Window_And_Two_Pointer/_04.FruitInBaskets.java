class Solution {
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        int maxi = 0;
        HashMap<Integer,Integer> st = new HashMap<>();
        int l=0,r=0;
        while(r<n){
            st.put(fruits[r],st.getOrDefault(fruits[r],0)+1);
            if(st.size()>2){
                while(st.size()>2){
                    st.put(fruits[l],st.get(fruits[l])-1);
                    if(st.get(fruits[l])==0){
                        st.remove(fruits[l]);
                    }
                    l++;
                }
            }
            maxi = Math.max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
}
