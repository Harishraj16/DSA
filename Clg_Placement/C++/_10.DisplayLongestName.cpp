class Solution{
    public:
    string longest(string names[], int n)
    {
        pair<int,int>longest={-1,-1};
        for(int i=0;i<n;i++){
            int length = names[i].length(); //can also use .size() or strlen()
            if(length>longest.second){
                 longest.second=length;
                 longest.first = i;
            }
        }
        return names[longest.first];
    }
};
