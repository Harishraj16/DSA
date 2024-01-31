
class Compute 
{
    public long[] minAnd2ndMin(long arr[], long n)  
    {
        long small = Long.MAX_VALUE;
        long secondsmall = Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(arr[i]<small){
                secondsmall = small;
                small = arr[i];
            }
            else if(arr[i]<secondsmall && arr[i]!=small){
                secondsmall = arr[i];
            }
        }
        if(small == Long.MAX_VALUE || secondsmall == Long.MAX_VALUE)
        return new long[]{-1};
        long[] res = new long[2];
        res[0] = small;
        res[1] = secondsmall;
        return res;
    }
}
