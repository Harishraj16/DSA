class Solution
{
    public int firstElementKTime(int[] a, int n, int k) { 
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int num: a){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
            if(mpp.get(num)>=k) return num;
        }
        return -1;
    } 
}
