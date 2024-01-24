class Solution{
public:
	
	bool fascinating(int n) {
	   int num=n*2;
       int num1=n*3;
       string check="123456789";
       string ans="";
       ans=to_string(n)+to_string(num)+to_string(num1);
       sort(ans.begin(),ans.end());
       return check==ans;
	}
};
