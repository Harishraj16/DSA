class Solution{
  public:
    int minDiff(int arr[], int N, int K)
    {
        sort(arr,arr+N);
        int result = INT_MAX;
        for(int i=0;i<=N-K;i++){
            result = min(result,arr[i+K-1]-arr[i]);
        }
        return result;
    }
};
