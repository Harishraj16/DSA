#include<bits/stdc++.h>
using namespace std;

void swapnum1(int arr[],int i,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i]);
    swapnum1(arr,i+1,n);
}

void swapnum2(int arr[],int l,int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    swapnum2(arr,l+1,r-1);
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    swapnum1(arr,0,n-1);
    swapnum2(arr,0,n-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}