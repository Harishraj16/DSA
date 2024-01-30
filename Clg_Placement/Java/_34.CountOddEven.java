class Solution
{
    public void countOddEven(int[] arr, int n)
    {
        int odd = 0, even = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) even++;
            else odd++;
        }
        System.out.println(odd+" "+even);
    }
}
