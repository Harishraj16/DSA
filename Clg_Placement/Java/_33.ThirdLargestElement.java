class Solution
{
    int thirdLargest(int a[], int n)
    {
	    Arrays.sort(a);
	    return (int)a[n-3];
    }
}
