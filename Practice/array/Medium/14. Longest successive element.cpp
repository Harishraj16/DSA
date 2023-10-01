//Brute force approach:  Time: ~O(N^2)        Space:O(1) 
bool linearsearch(vector<int>&a,int num){
    for(int i=0;i<a.size();i++){
        if(a[i]==num)
            return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    int longest=1;
    for(int i=0;i<a.size();i++){
        int x=a[i];
        int count=1;
        for(int j=0;j<a.size();j++){
            if(linearsearch(a,x+1)){
                count++;
                x++;
            }
        }
        longest=max(longest,count);
    }
    return longest;
}


//Optimal approach 1:  Time:O(NlogN)+O(N)  Space:O(1)

#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    //sort the array:
    sort(a.begin(), a.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;

    //find longest sequence:
    for (int i = 0; i < n; i++) {
        if (a[i] - 1 == lastSmaller) {
            //a[i] is the next element of the
            //current sequence.
            cnt += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;

}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

//Optimal Approach 2: TIme:O(N)+O(2N)~O(3N)     Space:O(N) 

int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    if(n==0) return 0;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    
    int longest=1;
    for(auto it:a){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
            while (st.find(x + 1) != st.end()) {
              count++;
              x++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
