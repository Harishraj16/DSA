class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	   string res = "";
	   res += S[0];
	   for(int i=1;i<S.size();i++){
	       if(S[i-1]==' ') res+=S[i];
	   }
	   return res;
	}
};
