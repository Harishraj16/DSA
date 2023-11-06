#include<bits/stdc++.h>
using namespace std;

int bin(int n){
    if(n==1) 
      return 1;
    else 
      return n%2 + 10 * (bin(n/2));
}

int main() {
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    int binary = bin(n);
    cout<<"Binary: "<<binary;
    return 0;
}
