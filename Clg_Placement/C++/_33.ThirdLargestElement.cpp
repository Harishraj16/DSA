class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        int Maxi = INT_MIN;
        int SecondMaxi = INT_MIN;
        int ThirdMaxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>Maxi){
                ThirdMaxi = SecondMaxi;
                SecondMaxi = Maxi;
                Maxi = a[i];
            }
            else if(a[i]>SecondMaxi && a[i]!=Maxi){
                ThirdMaxi = SecondMaxi;
                SecondMaxi = a[i];
            }
            else if(a[i]>ThirdMaxi && a[i]<SecondMaxi){
                ThirdMaxi = a[i];
            }
        }
        return ThirdMaxi;
    }

};
