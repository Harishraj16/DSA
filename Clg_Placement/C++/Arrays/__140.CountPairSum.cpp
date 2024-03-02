class Solution
{ 
    static int countPairs(int arr1[],int arr2[], int M, int N, int k) 
    { 
       int start = 0;
       int end = N-1;
       int count = 0;
       while(start<M && end>=0){
           if(arr1[start]+arr2[end] == k){
               count++;
               start++;
               end--;
           }
           else if(arr1[start]+arr2[end] > k) end--;
           else start++;
       }
       return count;
    }
}
