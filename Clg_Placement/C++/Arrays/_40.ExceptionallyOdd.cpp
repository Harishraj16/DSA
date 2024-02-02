class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int result=0;
        for(int i=0;i<n;i++){
            result ^= arr[i];
        }
        return result;
    }
};
