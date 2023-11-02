#include<bits/stdc++.h>
using namespace std;

bool palin1(string str,int l,int r){
    if(l>=r)return true;
    if(str[l]!=str[r]) return false;
    palin1(str,l+1,r-1);
}

bool palin2(string str,int i,int n){
    if(i>=n/2) return true;
    if(str[i]!=str[n-i]) return false;
    palin2(str,i+1,n);
}

int main(){
    string input;
    cin>>input;
    int n=input.size();
    if(palin2(input,0,n-1)) cout<<"true";
    else cout<<"false";
    return 0;
}