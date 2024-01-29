class Compute {
    public String isSubset( long a1[], long a2[], long n, long m) {
        HashMap<Long, Integer> mpp = new HashMap<>();
        for(long num: a1){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        for(long num: a2){
            if(!mpp.containsKey(num) || mpp.get(num)==0) return "No";
            mpp.put(num,mpp.get(num)-1);
        }
        return "Yes";
    }
}
