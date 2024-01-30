//Brute Approach: time:O(NlogN)
class Solution
{
    int thirdLargest(int a[], int n)
    {
	    Arrays.sort(a);
	    return (int)a[n-3];
    }
}

//Optimal Approach: time:O(N)
class Solution
{
    int thirdLargest(int a[], int n)
    {
        int firstl = Integer.MIN_VALUE;
        int secondl = Integer.MIN_VALUE;
        int thirdl = Integer.MIN_VALUE;
        
        for(int i=0;i<n;i++){
            if(a[i]>firstl){
                thirdl = secondl;
                secondl = firstl;
                firstl = a[i];
            }
            else if(a[i]>secondl && a[i]<firstl){
                thirdl = secondl;
                secondl = a[i];
            }
            else if(a[i]>thirdl && a[i]<secondl){
                thirdl = a[i];
            }
        }
        return thirdl;
    }
}
