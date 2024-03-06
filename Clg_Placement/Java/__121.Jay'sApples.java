class Complete{   
    // Function for finding maximum and value pair
    public static int minimum_apple (int arr[], int n) {
        //Complete the function
        Arrays.sort(arr);
        int count=1;
        
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                count++;
            }
        }
        return count;
    }
}


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



class Complete{
    
   
    // Function for finding maximum and value pair
    public static int minimum_apple (int arr[], int n) {
        //Complete the function\
        HashSet<Integer> set  = new HashSet<>();
        for(int i = 0; i<n; i++){
            set.add(arr[i]);
        }
        int x  = set.size();
        return x;
    }
    
    
