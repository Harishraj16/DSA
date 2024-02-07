
string convert(string s)
{
    int n = s.length();
    for(int i=0;i<n;i++){
        if(isupper(s[i])){
            s[i] = 'A'+('Z'-s[i]);
        }
        else{
            s[i] = 'a'+('z'-s[i]);
        }
    }
    return s;
}
