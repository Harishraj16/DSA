#include<iostream>
using namespace std;

int main() {
	int n;
	int count=0;
	cin>>n;
	//if(n==0 || n==1)
	//cout<<"false";
	for(int i=1;i*i<=n;i++){
        if (n % i == 0) {
          count++;
		  if((n/i)!=i)
		  count++;
        }
    }
    if(count==2)
	cout<<"true";
	else
	cout<<"false";
}
