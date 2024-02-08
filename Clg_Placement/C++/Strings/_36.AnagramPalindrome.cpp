int isPossible (string S)
{
    int n = S.length();
    unordered_map<char,int> mpp;
    for(int i=0;i<n;i++){
        mpp[S[i]]++;
    }
    int c=0,c1=0;
    for(auto it: mpp){
        if(it.second%2==0) c++;
        else c1++;
    }
    if(c1>1) return 0;
    return 1;
}
