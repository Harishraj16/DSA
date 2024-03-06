class Solution
{
    int findDuplicate(int arr[], int N,int K)
    {
        int result = -1;
        TreeMap<Integer,Integer> mpp = new TreeMap<>();
        for(int num:arr){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        for(Map.Entry<Integer,Integer> entry: mpp.entrySet()){
            if(entry.getValue()==K){
                result = entry.getKey();
                return result;
            }
        }
        return result;
    }
}
