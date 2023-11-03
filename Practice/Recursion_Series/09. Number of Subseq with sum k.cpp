#include<bits/stdc++.h>
using namespace std;

int subseq(int arr[],int n,int s,int sum){
    if(n<=0){ 
        if(s==sum) return 1;
        else return 0;
    }
    
    //pick the particular index into the subsequenc
    s += arr[n-1];

    int l=subseq(arr,n-1,s,sum);

    s -= arr[n-1];
    
    //Not pick the particular index into the subsequence
    int r = subseq(arr,n-1,s,sum);

    return l+r;
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
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    int res=subseq(arr,n,0,sum);
    cout<<"Number of subsequences with sum "<<sum<<": "<<res;
    return 0;
}