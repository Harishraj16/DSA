string merge (string S1, string S2)
{
    string res = "";
    int i=0,j=0;
    while(i<S1.size() && j<S2.size()){
        res += S1[i++];
        res += S2[j++];
    }
    while(i<S1.size()){
        res += S1[i++];
    }
    while(j<S2.size()){
        res += S2[j++];
    }
    return res;
}
