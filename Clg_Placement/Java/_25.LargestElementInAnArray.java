class Compute {
    
    public int largest(int arr[], int n)
    {
        int largest = Integer.MIN_VALUE;
        for(int num: arr){
            largest = Math.max(largest,num);
        }
        return largest;
    }
}
