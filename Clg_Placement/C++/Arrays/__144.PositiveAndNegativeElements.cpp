class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int> res;
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<n;i++){
            if(a[i]>0) pos.push_back(a[i]);
            else neg.push_back(a[i]);
        }
        for(int i=0;i<n/2;i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};
