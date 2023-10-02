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


//Optimal Approach: Time:O(N^2)+O(N^2)  Space:O(1)


#include<bits/stdc++.h>

using namespace std;
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix           //time:O(N/2)
    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < i; j++) {
	        swap(matrix[i][j], matrix[j][i]);   //time:O(N/2)
	    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());    //time:O(N^2)
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
	    for (int j = 0; j < arr[0].size(); j++) {
	        cout << arr[i][j] << " ";
	    }
    cout << "\n";
    }
}
