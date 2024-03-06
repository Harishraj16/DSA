class Solution {
    
    public long findDiff(long arr[], long n)
    {
        HashMap<Long,Integer> mpp = new HashMap<>();
        for(long num: arr){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        long lowest = Long.MAX_VALUE;
        long highest = Long.MIN_VALUE;
        for(Map.Entry<Long,Integer>entry: mpp.entrySet()){
            if(entry.getValue()<=lowest) lowest = entry.getValue();
            if(entry.getValue()>=highest) highest = entry.getValue();
        }
        return highest-lowest;
    }
}
