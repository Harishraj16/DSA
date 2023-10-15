using namespace std;
#include<bits/stdc++.h>
int countDigits(int n){
    string x = to_string(n);
  return x.length(); 
}

int main() {
    int n,c;
    cout<<"Enter n:";
    cin>>n;
    c=countDigits(n);
    cout<<"Number of Digits: "<<c;
}
