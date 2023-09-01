Better solution: 

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int zero,one,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }
    for(int j=0;j<n;j++){
        if(j<zero){
            arr[j]=0;
        }

        else if(j>=zero && j<zero+one){
            arr[j]=1;
        }

        else arr[j]=2;
    }
}

optimal solution:

#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
