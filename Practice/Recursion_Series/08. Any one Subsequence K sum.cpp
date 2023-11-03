#include<bits/stdc++.h>
using namespace std;

bool subseq(vector<int>&ds,int arr[],int n,int s,int sum){
    if(n<=0){ 
        if(s==sum){
            for(auto it:ds){
            cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
    else return false;
    }
    
    //pick the particular index into the subsequence
    ds.push_back(arr[n-1]);
    s += arr[n-1];
    if (subseq(ds,arr,n-1,s,sum) == true){
        return true;
    }
    ds.pop_back();
    s -= arr[n-1];
    
    //Not pick the particular index into the subsequence
    if(subseq(ds,arr,n-1,s,sum) == true){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the value(n): ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    subseq(ds,arr,n,0,sum);
    return 0;
}