//Brute force approach: Time: O(N+N/2)          Space:O(N/2 + N/2) = O(N) 

vector<int> alternateNumbers(vector<int>&a) {
    vector<int> pos;
    vector<int> neg;
    int n=a.size();
    
    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    for(int i=0;i<n/2;i++){
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}


// Optimal Approach: Time:O(N)              Space: O(N)

vector<int> alternateNumbers(vector<int>&a) {
    int  n=a.size();
    vector<int> ans(n,0);
    int pos_index=0,neg_index=1;
    
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans[neg_index]=a[i];
            neg_index += 2;
        }
        else{
            ans[pos_index]=a[i];
            pos_index += 2;
        }
    }
    return ans;
}
