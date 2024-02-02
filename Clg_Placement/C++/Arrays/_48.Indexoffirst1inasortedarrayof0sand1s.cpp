//better way: time: O(N)
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        for(int i=0;i<n;i++){
            if(a[i]==1) return i;
        }
        return -1;
    }
};

//Optimal way: time:O(logN)
int firstIndex(int a[], int n) 
    {
        int i=0,j=n-1 ,ans=INT_MAX;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(a[mid]==1)
            {
                ans=mid;
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return ans;
    }
