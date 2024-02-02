class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        ca = 0 , cb = 0;
        for(int i=0;i<3;i++){        //comparing three skills so directly give 3.
            if(a[i]>b[i]) ca+=1;
            else if(a[i]<b[i]) cb+=1;
            else continue;
        }
};
