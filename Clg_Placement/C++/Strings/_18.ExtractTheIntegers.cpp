vector<string> extractIntegerWords(string s)
{
    vector<string> res;
    string str;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            str = s[i];
            while(isdigit(s[i+1])){
                str += s[i+1];
                i++;
            }
            res.push_back(str);
        }
    }
    return res;
}
