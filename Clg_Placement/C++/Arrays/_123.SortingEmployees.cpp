class Solution{
    public:
    static bool check(const node&a, const node&b){
        //if check is a non-static member function then, 
        //it cannot be used directly.
        if(a.salary!=b.salary) return a.salary<b.salary;
        else a.name<b.name;
    }
	public:
	void sortRecords(node arr[], int n)
	{
	    sort(arr,arr+n,check);
	}
};
