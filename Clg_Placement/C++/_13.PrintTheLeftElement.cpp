class Solution{
    public:
    int leftElement(int a[], int n) {
        sort(a,a+n);
        if(n%2!=0) return a[n/2];
        else if(n%2==0) return a[(n/2)-1];
        /*In C++, when indexing an array with a long variable, 
        the value is implicitly converted to the appropriate integer
        type for array indexing (int or size_t). The language handles 
        this conversion automatically, ensuring correct access to array 
        elements. If the array index type is int, the result of n/2, 
        where n is a long, is implicitly converted to int for proper 
        indexing. This behavior is inherent in the language rules for
        array indexing in C++.*/
        return -1;
    }
};
