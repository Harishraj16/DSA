//74. Search a 2D Matrix

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target) return true;
            }
        }
        return false;
    }
}

//Optimal way: O(log(m*n))
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        if(target<matrix[0][0] || target>matrix[n-1][m-1]) return false;
        int row = 0;
        while(row<n){
            if(target<= matrix[row][m-1]){
                int left = 0;
                int right = m-1;
                while(left<=right){
                    int mid = left+(right-left)/2;
                    if(target == matrix[row][mid]) return true;
                    else if(target<matrix[row][mid]) right = mid-1;
                    else left = mid+1;
                }
                return false;
            }
            else row++;
        }
        return false;
    }
}
