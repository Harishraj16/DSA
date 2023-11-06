#include<bits/stdc++.h>
using namespace std;

int Meanfind(int arr[],int n){
    if(n<=1){
        return arr[n];
    }
    return arr[n-1]+Meanfind(arr,n-1);
}

int Mean(int arr[],int n){
    int sum = Meanfind(arr,n);
    return sum/n;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    double mean = Mean(arr, n);
    cout << "Mean of the array: " << mean << endl;

    return 0;
}


//Alternative with simple one function:
#include <iostream>

double calculateMeanRecursive(int arr[], int n, int index, double sum) {
    if (index == n) {
        if (n == 0) {
            return 0;  // Avoid division by zero for an empty array
        }
        return sum / n;  // Base case: calculate and return the mean
    } else {
        sum += arr[index];  // Add the current element to the sum
        return calculateMeanRecursive(arr, n, index + 1, sum);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    double mean = calculateMeanRecursive(arr, n, 0, 0);
    std::cout << "Mean of the array: " << mean << std::endl;

    return 0;
}
