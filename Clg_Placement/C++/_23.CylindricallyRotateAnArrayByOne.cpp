void rotate(int arr[], int n)
{
    reverse(arr, arr + n - 1);
    reverse(arr, arr + n);
}

//optimized way
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
