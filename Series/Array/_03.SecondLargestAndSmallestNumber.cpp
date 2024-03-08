vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int max=INT_MIN;
    int s_max=INT_MIN;
    int min=INT_MAX;
    int s_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            s_max = max;
            max = arr[i];
        }
        else if(arr[i]>s_max && arr[i]!=max){
            s_max=arr[i];
        }

        if(arr[i]<min){
            s_min = min;
            min = arr[i];
        }
        else if(arr[i]<s_min && arr[i]!=min){
            s_min=arr[i];
        }
    }

    return {s_max,s_min};
}
