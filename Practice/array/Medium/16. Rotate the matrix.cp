//Brute force approach:O(N^2)     Time:  Space:O(N^2)

#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	vector<vector<int>> ans(n,vector<int>(n));

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			ans[j][n-1-i]=mat[i][j];
		}
	}
	mat=ans;
}
