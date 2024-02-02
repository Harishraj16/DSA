class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    long long sum = (static_cast<long long>(n)*(n+1))/2;
	    return sum;
	}
};
