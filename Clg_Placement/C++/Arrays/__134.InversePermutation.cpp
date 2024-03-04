vector<int> inversePermutation(int arr[], int size) {
    vector<int> res(size,0);
    for(int i=0;i<size;i++){
        res[arr[i]-1] = i+1;
    }
    return res;
}
