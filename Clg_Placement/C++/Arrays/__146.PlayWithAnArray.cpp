vector<int> formatArray(vector<int> a,int n)
{
    vector<int> res;
    sort(a.begin(),a.end(),greater<int>());
   for(int i=0;i<n;i+=2){
       if(i<n-1){
        res.push_back(a[i+1]);
       }
       res.push_back(a[i]);
   }
    return res;
}
