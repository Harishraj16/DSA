class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    vector<string>res;
	    for(int i=S.length()-1;i>=0;i--){
	        res.push_back(S);
	        S[i] -= S[i];
	    }
	    return res;
	}

};
