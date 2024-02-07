class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        string res="";
        for(int i=0;i<n;i++){
            res += arr[i];
        }
        return res;
    }
};


//Minimized version

class Solution{
    public:
    string chartostr(char arr[] , int n)
    { 
        return string(arr,arr+n);
    }
};
