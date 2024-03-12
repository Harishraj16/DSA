#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int>st;
    for(int i=0;i<a.size();i++){
        st.insert(a[i]);
    }
    for(int i=0;i<b.size();i++){
        st.insert(b[i]);
    }

    vector<int>result(st.begin(),st.end());
    return result;
}

#include <bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    vector<int> result;
    int i=0,j=0;
    int n=a.size(),m=b.size();
    while(i<n && j<m){
      if(a[i]<=b[j]){
        result.push_back(a[i]);
        i++;
      }
      else{
        result.push_back(b[j]);
        j++;
      }
    }
    while(i<n){
      result.push_back(a[i]);
      i++;
    }
    while(j<m){
      result.push_back(b[j]);
      j++;
    }
    i=0;
    for(int j=i+1;j<result.size();j++){
      if(result[i]!=result[j]){
        i++;
        result[i]=result[j];
      }
    }
    result.erase(result.begin()+i+1,result.end());
    return result;
}


#include <bits/stdc++.h>
std::vector<int> sortedArray(std::vector<int> a, std::vector<int> b) {
    int n1=a.size();
    int n2=b.size();

    int i=0;
    int j=0;
    vector<int>result;
    while(i<n1 && j<n2){
        if(a[i]<= b[j]){
          if (result.size() == 0 || result.back() != a[i]) {
            result.push_back(a[i]);
          }
          i++;
        }
         else {
          if (result.size() == 0 || result.back() != b[j]) {
            result.push_back(b[j]);
          }
          j++;
        }
    }

    while(i<n1){
        if (result.size() == 0 || result.back() != a[i]) {
          result.push_back(a[i]);
        }
          i++;
        
    }

    while(j<n2){
                if (result.size() == 0 || result.back() != b[j]) {
            result.push_back(b[j]);
        }
            j++;
    }
    return result;
}
