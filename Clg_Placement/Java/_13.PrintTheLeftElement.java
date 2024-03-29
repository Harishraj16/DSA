class Solution {
    
    public long leftElement(long arr[], long n)
    {
        Arrays.sort(arr);
        if(n%2 != 0) return arr[(int)n/2];  //Here n might be a long type then n/2 returns long 
        //so to overcome the improper index value we do explicit type conversion.
        else if(n%2 == 0) return arr[(int)(n/2)-1];
        return -1;
    }
}
