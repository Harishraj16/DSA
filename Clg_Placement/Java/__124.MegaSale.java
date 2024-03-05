class Compute {
    public static long maxProfit(int a[], int n, int m) {
        long profit = 0;
        Arrays.sort(a);
        for(int i=0;i<n && m>0;i++){
            if(a[i]>=0) break;
            profit -= (a[i]);
            m--;
        }
        return profit;
    }
}
