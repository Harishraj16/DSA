//Using TreeMap:
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

//Using HashMap:
class Solution
{
    int findDuplicate(int arr[], int N,int K)
    {
        HashMap<Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<N;i++)
        {
            int key=arr[i];
            int freq=hm.getOrDefault(key,0);
            hm.put(key,freq+1);
        }
        //--------------
        int ans=Integer.MAX_VALUE;
        for(Map.Entry<Integer,Integer> e:hm.entrySet())
        {
            int key=e.getKey();
            int val=e.getValue();
            
            if(val==K && key<ans)
            {
                ans=key;
            }
        }
        if(ans==Integer.MAX_VALUE) return -1;
        else return ans;
    }
}
