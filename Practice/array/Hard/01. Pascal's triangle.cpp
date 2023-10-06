//Optimal approach:  Time:O(N*2)          Space:O(1)

class Solution {
public:
    vector<int> getrow(int row){
    long long ans=1;
    vector<int> ansrow;
    ansrow.push_back(ans);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
    return ansrow;
    }
    vector<vector<int>> generate(int N) {
        vector<vector<int>> ans;
        for(int row=1;row<=N;row++){
            ans.push_back(getrow(row));
        }
        return ans;
    }
};
