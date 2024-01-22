class Solution
{ 
    // Function to find starting and end index 
    static int[] findIndex(int a[], int n, int key) { 
        int left = -1, right = -1;
        for(int i=0;i<n;i++){
            if(a[i]==key && left==-1) left = i;
            if(a[n-i-1]==key && right==-1) right=n-i-1; 
        }
        int[] arr = {left,right};
        return arr;
    }
}
