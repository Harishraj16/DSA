class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int res = 0;
        if(date%2==0){
            for(int i=0;i<n;i++){
                if(car[i]%2!=0) res += fine[i];
            }
            return res;
        }
        else{
            for(int i=0;i<n;i++){
                if(car[i]%2==0) res += fine[i];
            }
            return res;
        }
    }
};


//Another way of writing:
long long int totalFine(int n, int date, int car[], int fine[])
    {
      long long int ans=0;
      bool flag=true;
      if(date%2!=0) flag=!flag;
      for(int i=0;i<n;i++)
      {
          if(flag && car[i]%2!=0) ans+=fine[i];
          else if(!flag && car[i]%2==0)
          ans+=fine[i];
      }
      return ans;
    }
