#include<bits/stdc++.h>
vector<int> getSecondOrderElements(int n, vector<int> a) {
    if (n < 2) {
        return {};
    }

    sort(a.begin(), a.end());

    int secondSmallest = a[1];
    int secondLargest = a[n - 2];

    return {secondLargest,secondSmallest};
}

