class GfG
{
    public static boolean ispalindrome(int num){
        int temp = num;
        int rev = 0;
        while(temp>0){
            rev = rev*10+temp%10;
            temp /= 10;
        }
        return rev == num;
    }
    
	public static int palinArray(int[] a, int n)
           {
                for(int i=0;i<n;i++){
                    if(!ispalindrome(a[i])) return 0;
                }
                return 1;
           }
}
