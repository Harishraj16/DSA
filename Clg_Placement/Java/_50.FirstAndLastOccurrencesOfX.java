class Solution{
    public ArrayList<Integer> firstAndLast(int arr[], int n, int x){
        ArrayList<Integer> result = new ArrayList<>();
        result.add(-1);
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                result.set(0,i);
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                result.add(i);
                break;
            }
        }
        return result;
    }
}
