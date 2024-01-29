class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       int low=0,high=N-1;
       while(low<high){
           if(A[low]==0) low++;
           else if(A[low]==1) swap(A[low],A[high--]);
       }
    }
};
