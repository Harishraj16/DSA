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
