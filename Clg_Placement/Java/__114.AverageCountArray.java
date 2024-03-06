class Solution{
    // Function for finding maximum and value pair
    public static ArrayList<Integer> countArray (int arr[], int n, int x) {
        ArrayList<Integer> res = new ArrayList<>();
        HashMap<Integer,Integer> mpp = new HashMap<>();
        for(int num: arr){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        for(int i=0;i<n;i++){
            int average = (int)(Math.floor((double)((arr[i]+x)/2)));
            if(mpp.containsKey(average)==true){
                res.add(mpp.get(average));
            }
            else{
                res.add(0);
            }
        }
        return res;
    }
}
