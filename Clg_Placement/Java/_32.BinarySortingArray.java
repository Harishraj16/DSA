//prentend to use Dutch National Flag Algorithm:
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

//simple intution:
class Solution
{
    //Function to sort the binary array.
    static void binSort(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0) zero++;
            else one++;
        }
        for(int i=0;i<n;i++){
            if(i<zero) a[i]=0;
            else a[i]=1;
        }
    }
}
