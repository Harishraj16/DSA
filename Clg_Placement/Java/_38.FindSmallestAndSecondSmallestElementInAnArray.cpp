vector<int> minAnd2ndMin(int a[], int n) {
    int small = INT_MAX;
    int secondsmall = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<small){
            secondsmall = small;
            small = a[i];
        }
        else if(a[i]<secondsmall && a[i]>small) secondsmall =a[i];
    }
    if(small==INT_MAX || secondsmall==INT_MAX) return {-1};
    return {small,secondsmall};
}
