class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long>x1,x2;
        int i=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                x1.push_back(arr[i]);
            }
            else
            {
                x2.push_back(arr[i]);
            }
        }
        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end(),greater<long>());
        for(int i=0;i<x2.size();i++)
        {
           arr[i]=x2[i];
        }
         for(int i=x2.size();i<n;i++)
        {
           arr[i]=x1[j++];
        }
    }
};



class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
      sort(arr, arr+n, [](int a, int b)->int{   //using lambda function
        if(a%2==0 && b%2==0) return a < b;
        if(a%2!=0 && b%2!=0) return a > b;
        if(a%2!=0 && b%2==0) return 1;
        else return 0;
      });
    }
};
