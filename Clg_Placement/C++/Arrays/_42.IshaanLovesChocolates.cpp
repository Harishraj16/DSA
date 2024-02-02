class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        int small = INT_MAX;
        for(int i=0;i<n;i++){
            small = min(small,arr[i]);
        }
        return small;
    }
};
