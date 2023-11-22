//Naive Approach: TC: O(N*N)   SC:O(N*N)
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
       vector<vector<int>> ans(n,vector<int>(n));
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               ans[i][j]=matrix[j][i];
           }
       }
       matrix=ans;
    }
};

//Optimal Approach: TC:O(N*N)     SC:O(1)
class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               swap(matrix[i][j],matrix[j][i]);
           }
       }
    }
};
