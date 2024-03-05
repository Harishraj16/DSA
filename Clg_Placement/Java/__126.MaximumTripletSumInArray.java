class Solution{
    
  
    int maxTripletSum(int a[], int n)
    {
        if (n<3) return 0;
        int TotalSum = a[0]+a[1]+a[2];
        Arrays.sort(a);
        for(int i=0;i<n-2;i++){
            int temp = a[i]+a[i+1]+a[i+2];
            TotalSum = Math.max(TotalSum,temp);
        }
        return TotalSum;
    }
}
