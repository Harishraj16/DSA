vector<int> res;
void prt(int i,int x){
    if(i>x) return;
    res.emplace_back(i);
    prt(i+1,x);
}

vector<int> printNos(int x) {
   int i=1;
   prt(i,x);
   return res;
}
