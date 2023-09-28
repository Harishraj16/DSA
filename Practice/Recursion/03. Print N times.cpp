vector<string>s;
void printword(int i,int n){
    if(i>n)return;
	s.emplace_back("Coding Ninjas ");
	printword(i+1,n);
}
vector<string> printNTimes(int n) {
	int i=1;
	printword(i,n);
	return s;
}
