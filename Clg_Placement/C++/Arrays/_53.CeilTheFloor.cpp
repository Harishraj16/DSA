
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int mini=INT_MIN;
    int maxi=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>mini && arr[i]<=x) mini = arr[i];
        if(arr[i]<maxi && arr[i]>=x) maxi = arr[i];
    }
    if(mini==INT_MIN) mini = -1;
    if(maxi==INT_MAX) maxi = -1;
    return {mini,maxi};
}
