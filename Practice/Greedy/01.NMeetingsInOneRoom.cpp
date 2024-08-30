//N meetings in one room
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool comp(pair<int,int> p1,pair<int,int> p2){
        return p1.second < p2.second;
    }
    int maxMeetings(int n, int start[], int end[]) {
        pair<int,int> p[n];
        for(int i=0;i<n;i++){
            p[i].first = start[i];
            p[i].second = end[i];
        }
        sort(p,p+n,comp);
        int count = 1;
        int ending = p[0].second;
        for(int i=1;i<n;i++){
            if(ending<p[i].first){
                count++;
                ending = p[i].second;
            }
        }
        return count;
    }
};
