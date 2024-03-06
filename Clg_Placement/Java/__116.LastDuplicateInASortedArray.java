class Complete{
    // Function for finding maximum and value pair
    public static ArrayList<Integer> dupLastIndex (int arr[], int n) {
        ArrayList<Integer> result = new ArrayList<>();
        result.add(-1);
        for(int i=n-1;i>0;i--){
            if(arr[i]==arr[i-1]){
                result.set(0,i);
                result.add(arr[i]);
                break;
            }
        }
        return result;
    }
}
