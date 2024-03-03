class Solution
{
    public:
        string MaxNumber(int a[], int n)
        {
           int hash[10]={0};
           while(n--){
               hash[a[n]]++;
           }
           string res;
           for(n=9;n>=0;n--){
               while(hash[n]--){
                   res += '0'+n;
               }
           }
           return res;
        }  
};
