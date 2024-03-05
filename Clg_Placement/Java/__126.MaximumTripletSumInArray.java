class Solution{
    
  
    int maxTripletSum(int a[], int n)
    {
        if (n<3) return 0;
        Arrays.sort(a);
        int TotalSum = a[n-1]+a[n-2]+a[n-3];
        return TotalSum;
    }
}
