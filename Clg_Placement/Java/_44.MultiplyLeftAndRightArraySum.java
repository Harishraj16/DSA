class Complete{
    
   
    // Function for finding maximum and value pair
    public static int multiply (int arr[], int n) {
        int right = 0 , left = 0;
        for(int i=0;i<n/2;i++) left += arr[i];
        for(int i=n-1;i>=n/2;i--) right += arr[i];
        return (int)(left*right);
    }
    
    
}
