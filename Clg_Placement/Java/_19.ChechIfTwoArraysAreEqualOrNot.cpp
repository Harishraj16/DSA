//better:  time:O(NlogN)  coz of sorting   Space: O(1)
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]) return 0;
        }
        return 1;
    }
};

//optimal: time:O(N) space:O(N)   coz of unordered_map
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<ll,int> mpp;   //ll means long long c++ suports this short form.
        for(ll num:A){
            mpp[num]++;
        }
        for(ll num:B){
            if(mpp.find(num)==mpp.end()||mpp[num]==0){
                return false;
            }
            mpp[num]--;
        }
        return true;
    }
};
