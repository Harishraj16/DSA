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
