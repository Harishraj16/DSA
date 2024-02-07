class Solution
{
  public:   
    int countCamelCase (string s)
    {
    	int count = 0;
    	for(int it:s){
    	    if(it!=0 && (it>=65 && it<=90)) count++;
    	}
    	return count;
    }
};
