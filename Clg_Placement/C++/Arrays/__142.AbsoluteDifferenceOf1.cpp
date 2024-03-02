class Solution{
  public:
  
    bool check(long long num){
        if (num<10) return false; 
        while(num){
            int digit1 = num%10;
            num/=10;
            if(num){
                int digit2 = num%10;
                if(abs(digit1-digit2)!=1) return false;
            }
        }
        return true;
    }
  
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k) {
        vector<long long> res;
        for(int i=0;i<n;i++){
            if(arr[i]<k){
                bool flag = check(arr[i]);
                if(flag) res.push_back(arr[i]);
            }
        }
        return res;
    }
};
