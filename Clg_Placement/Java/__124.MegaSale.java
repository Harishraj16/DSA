long long maxProfit(int a[], int n, int m)
{
    long long maxProfit = 0;
    sort(a,a+n);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>=0 || count>=m) break;
        maxProfit = maxProfit - (a[i]);
        count++;
    }
    return maxProfit;
}
