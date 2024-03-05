//Brute way: O(nlogn)
class Solution{
    int maxTripletSum(int a[], int n)
    {
        if (n<3) return 0;
        Arrays.sort(a);
        int TotalSum = a[n-1]+a[n-2]+a[n-3];
        return TotalSum;
    }
}


//Optimal way: O(n)
class Solution{
    int maxTripletSum(int a[], int n)
    {
        int max1=Integer.MIN_VALUE;
        int max2=Integer.MIN_VALUE;
        int max3=Integer.MIN_VALUE;
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i]>max1){
                max1=a[i];
                k=i;
            }
        }
        a[k]=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]<=max1 && a[i]>max2){
                max2=a[i];
                k=i;
            }
        }
        a[k]=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>max3 && a[i]<=max2){
                 max3 = a[i];
                 k=i;
            }
        }
        return max1+max2+max3;
    }
}
