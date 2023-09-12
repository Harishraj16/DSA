bool palindrome(int n,int i,string& str){
    if(i>=n){
        return true;
    }
    else if(str[i]==str[n]){
        palindrome(n-1,i+1,str);
    }
    else{
        return false;
    }
}

bool isPalindrome(string& str) {
    int n = str.length();
    int i=0;
    palindrome(n-1,i,str);
}
