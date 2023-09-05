//Better Solution[O(n log n)]:
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


//optimal Solution [O(n)]:

#include <vector>

std::vector<int> getSecondOrderElements(int n, std::vector<int> a) {
    if (n < 2) {
        // Handle the case where the vector has fewer than 2 elements.
        // You can return an empty vector or handle it as needed.
        return {};
    }

    int smallest = a[0];
    int secondSmallest = INT_MAX;
    int largest = a[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }

        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    return {secondSmallest, secondLargest};
}
