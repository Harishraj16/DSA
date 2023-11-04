
//Usual_solution:

void insertionSort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}


//Using_Recursion:

void insert(int arr[], int i)
    {
        int n = sizeof(arr)/sizeof(arr[0]);
        if(i == n-1){
            return;
        }
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        insert(arr,i+1);
    }
