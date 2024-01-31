class GfG
{
    public static Long product(Long arr[], Long mod, int n)
    {
        long prod = 1;
        for(int i=0;i<n;i++){
            prod = (prod*arr[i])%mod;
        }
        return prod;
    }
}
