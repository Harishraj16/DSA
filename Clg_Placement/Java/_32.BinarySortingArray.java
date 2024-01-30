class Solution
{
    //Function to sort the binary array.
    static void binSort(int arr[], int N)
    {
        int low=0;
        int high=N-1;
        while(low<high){
            if(arr[low]==0) low++;
            else if(arr[low]==1){
                arr[low]=arr[low]^arr[high];
                arr[high]=arr[low]^arr[high];
                arr[low]=arr[low]^arr[high];
                high--;
            }
        }
    }
}
