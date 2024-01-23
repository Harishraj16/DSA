class Solve {
    int[] getMoreAndLess(int[] arr, int n, int x) {
        int[] result = new int[2];
        result[0] = 0;
        result[1] = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                result[0]++; 
                result[1]++;
            }
            else if(arr[i]<x) result[0]++;
            else result[1]++;
        }
        return result;
    }
}
