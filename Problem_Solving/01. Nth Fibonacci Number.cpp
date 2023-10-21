// Finding Nth fibonacci number:

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    
    int arr[n];
    arr[0]=0,
    arr[1]=1;
    
    i=2;
        
    while(i<n){
        arr[i]=arr[i-1]+arr[i-2];
        i++;
    }
    cout<<arr[n-1];
}
