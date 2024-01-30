class Compute {
    
    public static int missingNumber(int A[], int n)
    {
        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum += A[i];
        }
        int targetSum = (n*(n+1))/2;
        return targetSum-sum;
    }
}
