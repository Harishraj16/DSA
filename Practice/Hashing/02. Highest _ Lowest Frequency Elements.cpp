#include <bits/stdc++.h>

vector<int> getFrequencies(vector<int>& v) {
    int n=v.size();

    map<int,int>mpp;

    for(int i=0;i<n;i++){

        mpp[v[i]]++;

    }

    vector<int>freq(2);

    int max=INT_MIN;

    int min=INT_MAX;

    for(auto i:mpp){

        if(i.second>max){

            freq[0]=i.first;

            max=i.second;

        }

        if(i.second<min){

            freq[1]=i.first;

            min=i.second;

        }

    }

    return freq ;
}
