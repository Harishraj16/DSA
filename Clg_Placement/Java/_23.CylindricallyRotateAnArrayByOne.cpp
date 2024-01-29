//Brute way!!
class Compute {
    
    public void reverse(int arr[],int start,int end){
        while(start<end){
            int temp = arr[end];
            arr[end]=arr[start];
            arr[start]=temp;
            start++;
            end--;
        }
    }
    
    public void rotate(int arr[], int n)
    {
        reverse(arr,0,n-2);
        reverse(arr,0,n-1);
    }
}

//optimal way!!
class Compute {
    
    public void rotate(int arr[], int n)
    {
        int temp = arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
}
