long long int product(int ar[], int n, long long int mod)
 {
     
    long long int product = 1;
    for(int i=0;i<n;i++){
        product = (product * ar[i]) % mod;
    }
    
    return product;
     
 }
