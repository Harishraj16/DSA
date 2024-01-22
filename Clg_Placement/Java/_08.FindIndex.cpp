class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        int left=-1,right=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==key && left==-1) left = i;
            if(arr[n-i-1]==key && right==-1) right=n-i-1;
        }
        return {left,right};
    }
  
};
