class Solution {

    public void scores(long a[], long b[]) {
        int a1 = 0;
        int b1 = 0;
        for(int i=0;i<3;i++){
            if(a[i]>b[i]) a1+=1;
            else if(a[i]<b[i]) b1+=1;
            else continue;
        }
        GFG.ca = a1;
        GFG.cb = b1;
    }
}
