string printNumber(string s, int n) 
{
    string res = "";
    for(int i=0;i<n;i++){
        if(s[i] >=97 && s[i]<=99) res+='2';
        else if(s[i]>=100 && s[i]<=102) res+='3';
        else if(s[i]>=103 && s[i]<=105) res+='4';
        else if(s[i]>=106 && s[i]<=108) res+='5';
        else if(s[i]>=109 && s[i]<=111) res+='6';
        else if(s[i]>=112 && s[i]<=115) res+='7';
        else if(s[i]>=116 && s[i]<=118) res+='8';
        else if(s[i]>=119 && s[i]<=122) res+='9';
    }
    return res;
}
