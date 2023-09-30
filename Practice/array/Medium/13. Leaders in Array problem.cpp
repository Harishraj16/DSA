//Optimal Approach:  Time:O(N)    Space:O(N)
vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
