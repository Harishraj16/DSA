//User function Template for Java

/*
 class Pair  
{  
    long first, second;  
    public Pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
} 

Java users need to return result in Pair class
For Example -> return new Pair(minimum,maximum)
*/


class Compute 
{
    static Pair getMinMax(long a[], long n)  
    {
        long mini = Long.MAX_VALUE;
        long maxi = Long.MIN_VALUE;
        for(long num: a){
            mini = Math.min(mini,num);
            maxi = Math.max(maxi,num);
        }
        return new Pair(mini,maxi);
    }
}
