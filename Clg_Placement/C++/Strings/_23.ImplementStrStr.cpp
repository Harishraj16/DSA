int strstr(string s, string x)
{
    int n = s.size();
    int m = x.size();
    for(int i=0;i<n;i++){
        int j;
        if(s[i]==x[0]){
            for(j=1;j<m;j++){
                if(i+j >= n || (s[i+j]!=x[j])) break;
            }
            if(j==m) return i;
        }
    }
    return -1;
}
