class Complete{
    // Function for finding maximum and value pair
    public static int minimum_apple (int arr[], int n) {
        HashMap<Integer,Integer> mpp = new HashMap<>();
        for(int num: arr){
            mpp.put(num,mpp.getOrDefault(num,0)+1);
        }
        int count = mpp.size();
        return count;
    }
}
