vector<int> pendulumArrangement(int arr[], int n) {
    sort(arr,arr+n);
    vector<int> result;
    for(int i=0;i<n;i=i+2){
        result.push_back(arr[i]);
    }
    reverse(result.begin(),result.end());
    for(int i=1;i<n;i+=2){
        result.push_back(arr[i]);
    }
    return result;
}
