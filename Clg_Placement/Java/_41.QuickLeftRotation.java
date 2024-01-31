class Solution
{
    void reverse(long arr[],int start,int end){
        while(start<end){
            arr[start] = arr[start]^arr[end];
            arr[end] = arr[start]^arr[end];
            arr[start] = arr[start]^arr[end];
            start++;
            end--;
        }
    }
    void leftRotate(long arr[], int k,int n)
    {
        k = k%n;
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        reverse(arr,0,n-1);
    }
}
