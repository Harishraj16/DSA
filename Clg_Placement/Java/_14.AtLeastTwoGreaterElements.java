class Solution {
    public long[] findElements( long a[], long n)
    {
        Arrays.sort(a);
        long[] result = new long[(int)n-2];
        
        /*In Java, array indices must be of integer type. 
        When declaring an array, the size should be an integer. 
        In this code, the expression n-2 results in a long value, 
        causing a compilation error. To resolve this, explicitly 
        cast the result of n-2 to an integer in the array declaration*/
        
        for(int i=0;i<n-2;i++){
            result[i]=a[i];
        }
        return result;
    }
}
