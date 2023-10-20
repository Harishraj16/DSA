//Checking Amstrong number:

#include<bits/stdc++.h>
bool checkArmstrong(int n){
	int N=n; //n will be modified so N is created for comparison ant the end
  int sum=0; //to add and check the cube of n;
	int count=(int)log10(n)+1;
	while(n){
		int digit=n%10;
		sum=sum+pow(digit,count);
		n/=10;
	}
	if(sum==N)
	return true;
	else
	return false;
}
