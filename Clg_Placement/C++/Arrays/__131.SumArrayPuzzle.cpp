void SumArray(int arr[], int n)
{
    int totalSum = 0; 
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = totalSum - arr[i];
    }
}
