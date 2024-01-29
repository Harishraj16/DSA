int count_k(int num,int k){
    int c = 0;
    while(num>0){
        int temp = num%10;
        if(temp == k) c++;
        num /= 10;
    }
    return c;
}

int num(int a[], int n, int k)
{
    int count = 0;
    for(int i=0;i<n;i++){
        count += count_k(a[i],k);
    }
    return count;
}
