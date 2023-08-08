#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        return false;

        int N=x;
        long long rev=0;
        while(x){
            rev=rev*10+x%10;
            x/=10;
        }
        return(rev==N);
    }
};
