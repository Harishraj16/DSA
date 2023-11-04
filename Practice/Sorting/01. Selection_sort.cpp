//Usual solution:

void selectionSort(vector<int>&arr) {
   int n= arr.size();
   for(int i=0;i<n-1;i++){
       int mini=i;
       for(int j=i;j<n;j++){
         if (arr[j] < arr[mini]) {
           mini = j;
         }
       }
       int temp = arr[mini];
       arr[mini] = arr[i];
       arr[i] = temp;
   }
}


//Using Recursion:

int select(int arr[], int i)
    {
        int n=sizeof(arr)/sizeof(arr[0]);
        if(i == n-1){
            return 0;
        }
        
        int mini = i;
        
        for(int j=i;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
        
        select(arr,i+1);
    }
