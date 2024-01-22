class Solution {
public:
    int PalinArray(int arr[], int n)
    {
    	for(int i=0;i<n;i++){
    	    int rev = 0;
    	    int temp = arr[i];
    	    while(temp>0){
    	        rev = 10*rev + temp%10;
    	        temp /= 10;
    	    }
    	    if(rev!=arr[i]) return 0;
    	}
    	return 1;
    }
};


#include<algorithm>
class Solution {
public:

    bool ispalindrome(int num){
        string str = to_string(num);
        string rev = str;
        reverse(rev.begin(),rev.end());
        return rev==str;
    }
    
    int PalinArray(int arr[], int n)
    {
       for(int i=0;i<n;i++){
            if(!ispalindrome(arr[i])) return 0;
       }
    	return 1;
    }
};
