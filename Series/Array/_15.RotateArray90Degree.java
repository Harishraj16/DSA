//48. Rotate Image
class Solution {
    public static void reverse(int[] mat){
        int n = mat.length;
        int start = 0;
        int end = n-1;
        while(start<=end){
            int temp = mat[start];
            mat[start] = mat[end];
            mat[end] = temp;
            start++;
            end--;
        }
    }
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                j++;
            }
            i++;
        }
        for(int k=0;k<n;k++){
            reverse(matrix[k]);
        }
    }
}


//-----------------------------------------------------------------------------------------------------------------------

class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int[][] temp = new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[i][j] = matrix[n-j-1][i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = temp[i][j];
            }
        }
        
    }
}
