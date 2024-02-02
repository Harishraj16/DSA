//brute force approach: O(NlogN) //coz of sorting
class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        sort(a,a+n);
        vector<int> result;
        for(int i=0;i<n-2;i++){
            result.push_back(a[i]);
        }
        return result;
    }
};

//Optimal Approach: O(N)
class Solution{
public:
    vector<int> findElements(int arr[], int n)
    {
        int maxi=INT_MIN,prevmaxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi)prevmaxi=maxi,maxi=arr[i];
            if(arr[i]>prevmaxi && arr[i]!=maxi)prevmaxi=arr[i];
        }
        vector<int>result;
        for(int i=0;i<n-2;i++){
            if(arr[i]<prevmaxi)
            result.push_back(arr[i]);
        }
        return result;
    }
};
