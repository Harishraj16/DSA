class Solution{
    static int getCount(int arr[], int n, int num1, int num2) 
    { 
        int left = 0;
        int right = n-1;
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                left=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==num2){
                right = i;
                break;
            }
        }
        int count = right-(left+1);
        return count<0?0:count;
    }
}
