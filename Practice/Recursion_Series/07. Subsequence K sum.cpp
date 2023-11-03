#include<bits/stdc++.h>
using namespace std;

void subseq(vector<int>&ds,int arr[],int n,int s,int sum){
    if(n<=0){ 
        if(s==sum){
            for(auto it:ds){
            cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    //pick the particular index into the subsequence
    ds.push_back(arr[n-1]);
    s += arr[n-1];
    subseq(ds,arr,n-1,s,sum);
    ds.pop_back();
    s -= arr[n-1];
    
    //Not pick the particular index into the subsequence
    subseq(ds,arr,n-1,s,sum);
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
