#include<bits/stdc++.h>
using namespace std;

void subseq(vector<int>&ds,int arr[],int n,int i){
    if(i>=n){
        cout<<"Subsequece:";
        if(!ds.empty()){
            for(auto it:ds){
            cout<<it<<" ";
            }
        }
        else cout<<"{ }";
        cout<<endl;
        return;
    }
    
    //pick the particular index into the subsequence
    ds.push_back(arr[i]);
    subseq(ds,arr,n,i+1);
    ds.pop_back();
    
    //Not pick the particular index into the subsequence
    subseq(ds,arr,n,i+1);
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
    subseq(ds,arr,n,0);
    return 0;
}





//Optimal: by using only n
#include<bits/stdc++.h>
using namespace std;

void subseq(vector<int>&ds,int arr[],int n){
    if(n<=0){
        cout<<"Subsequece:";
        if(!ds.empty()){
            for(auto it:ds){
            cout<<it<<" ";
            }
        }
        else cout<<"{ }";
        cout<<endl;
        return;
    }
    
    //pick the particular index into the subsequence
    ds.push_back(arr[n-1]);
    subseq(ds,arr,n-1);
    ds.pop_back();
    
    //Not pick the particular index into the subsequence
    subseq(ds,arr,n-1);
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
    subseq(ds,arr,n);
    return 0;
}
