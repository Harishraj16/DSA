class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int left = 0,right = 0;
       for(int i=0;i<n/2;i++){
           left += a[i];
           right += a[n-i-1];
       }
       if(right>left) return right-left;
       else return left-right;
    }
};
