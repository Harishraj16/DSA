class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr,arr+n);
        if (n<2) return false;
        int difference = arr[1]-arr[0];
        for(int i=1;i<n-1;i++){
            if(arr[i+1]-arr[i]!=difference) return false;
        }
        return true;
    }

};
