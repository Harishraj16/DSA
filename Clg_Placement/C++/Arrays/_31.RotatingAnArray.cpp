class Solution{   
public:
    void leftRotate(int arr[], int n, int k) {
        reverse(arr,arr+k);
        reverse(arr+k,arr+n);
        reverse(arr,arr+n);
    }
};
