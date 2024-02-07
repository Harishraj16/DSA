class Solution{
public:	

	string removeCharacters(string S)
	{
	    string res = "";
	    for(int i=0;i<S.length();i++){
	        if(S[i]>=48 && S[i]<=57) res += S[i];
	    }
	    return res;
	}
};
