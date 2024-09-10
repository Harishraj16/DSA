class Solution {
public:
    int hIndex(vector<int>& cites) {
        sort(cites.begin(),cites.end());
        int h_ind = 0;
        for(int i=cites.size()-1;i>=0;i--){
            if(cites[i]>h_ind) h_ind++;
            else return h_ind;
        }
        return h_ind;
    }
};
