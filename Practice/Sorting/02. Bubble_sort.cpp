//Usual_solution:

void bubbleSort(int arr[], int n)
    {
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        } 
    }

//Using recursion:

 void bubbleSort(int arr[], int n)
    {
        if(n == 1){
            return;
        }
            for(int j=0;j<n-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        bubbleSort(arr,n-1);
    }
