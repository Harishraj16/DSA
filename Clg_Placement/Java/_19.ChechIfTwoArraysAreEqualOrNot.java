class Solution{
    //Function to check if two arrays are equal or not.
    public static boolean check(long A[],long B[],int N)
    {
        HashMap<Long,Integer> mpp = new HashMap<>();
        for(long num: A){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        for(long it: B){
            if(!mpp.containsKey(it) || mpp.get(it)==0) return false;
            mpp.put(it,mpp.get(it)-1);
        }
        return true;
    }
}
