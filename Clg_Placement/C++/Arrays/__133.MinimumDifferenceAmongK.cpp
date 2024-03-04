//Brute: O(nlogn)+O(n*k)
class Solution{
  public:
    int minDiff(int arr[], int N, int K)
    {
        sort(arr,arr+N);
        int result=INT_MAX;
        for(int j=0;j<=N-K;j++){
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for(int i=j;i<j+K;i++){
                mini = min(arr[i],mini);
                maxi = max(arr[i],maxi);
            }
            result = min(result,maxi-mini);
        }
        return result;
    }
};

//Optimized way: O(nlogn)
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
