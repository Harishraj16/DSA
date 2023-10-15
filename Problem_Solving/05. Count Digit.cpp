#include <iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int count=0;
    int val=n;

while(n>0){
    int rem=n%10;

    if(rem!=0 && val%rem==0){
	count++;
    }
    n/=10;
}
    cout<<"Number of Digits: "<<count;
    return 0;
}
