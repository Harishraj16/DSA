string transform(string s)
{
    s[0] = s[0]-'a'+'A';
    for(int i=1;i<s.size();i++){
        if(s[i]==' ')
        s[i+1] = s[i+1]-'a'+'A';
    }
    return s;
}
