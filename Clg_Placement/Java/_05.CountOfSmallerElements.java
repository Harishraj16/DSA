class Solution{
    public int countOfElements(int []arr,int n,int x)
    {
        int count=0;
        for(int i=n-1;i>=0 && arr[i]!=x;i--){
            if(arr[i]>x) count++;
        }
        return n-count;
    }
}
