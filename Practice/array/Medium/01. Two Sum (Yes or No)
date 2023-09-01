brute force solution:

string read(int n, vector<int> book, int target)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(book[i]+book[j]==target) return "YES";
        }
    }
    return "NO";
}


better solution:

#include<bits/stdc++.h>

string read(int n, vector<int> book, int target)
{
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        int num=book[i];
        int needmore=target-num;
        if(mpp.find(needmore) != mpp.end()){
            return "YES";
        }
        mpp[num]=i;
    }
    return "NO";
}


Optimal Solution:

#include<bits/stdc++.h>

string read(int n, vector<int> book, int target)
{
    int left=0,right=n-1;
    sort(book.begin(),book.end());
    while(left<right){
        int sum=book[left]+book[right];
        if(sum==target) return "YES";
        else if(sum>target) right--;
        else left++;
    }
    return "NO";
}
