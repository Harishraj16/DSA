class Solution{
    public:
    string longest(string names[], int n)
    {
        int ind = -1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int size = names[i].length();
            if(size>maxi){
                maxi = size;
                ind = i;
            }
        }
        return names[ind];
    }
};
