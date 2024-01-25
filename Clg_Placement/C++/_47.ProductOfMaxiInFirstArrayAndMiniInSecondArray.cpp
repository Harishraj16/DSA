#include <climits>

class Solution {
public:
    long long find_multiplication(int a[], int b[], int n, int m) {
        long long maxi = LLONG_MIN;
        long long mini = LLONG_MAX;
        
        for (int i = 0; i < n; i++)
            maxi = max(maxi, static_cast<long long>(a[i]));

        for (int i = 0; i < m; i++)
            mini = min(mini, static_cast<long long>(b[i]));

        return maxi * mini;
    }
};

/*
By using long long for both maxi and mini, you minimize the risk of overflow when calculating 
the multiplication. Also, note the use of static_cast<long long>(...) to explicitly convert array 
elements to long long to avoid potential issues when comparing and assigning values.
*/
