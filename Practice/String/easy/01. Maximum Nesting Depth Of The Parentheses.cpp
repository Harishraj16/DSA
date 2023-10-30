int maxDepth(string s) {
	int count=0;
	int ignore=0;
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]=='(') {
			if(ignore==0) count++;
			else ignore--;
		}
		if(s[i]==')') ignore++;
	}
	return count;
}
