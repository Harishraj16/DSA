string to_upper(string str){
    int n = str.length();
    for(int i=0;i<n;i++){
        str[i] = toupper(str[i]);
    }
    return str;
}

//Another way:
string to_upper(string str){
    int n = str.length();
    for(char& c: str){
        if('a'<=c && c<='z'){
            c -= 32;
        }
    }
    return str;
}
