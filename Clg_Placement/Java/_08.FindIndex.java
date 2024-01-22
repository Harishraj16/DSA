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

//without extra variables left and right:
class Solution
{ 
    // Function to find starting and end index 
    static int[] findIndex(int a[], int n, int key) { 
        int[] arr = new int[2];
        arr[0]=-1;
        arr[1]=-1;
        for(int i=0;i<n;i++){
            if(a[i]==key && arr[0]==-1) arr[0] = i;
            if(a[n-i-1]==key && arr[1]==-1) arr[1]=n-i-1; 
        }
        return arr;
    }
}
