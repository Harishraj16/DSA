string to_upper(string str){
    int n = str.length();
    for(int i=0;i<n;i++){
        str[i] = toupper(str[i]);
    }
    return str;
}
