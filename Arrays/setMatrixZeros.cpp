// https://www.codingninjas.com/studio/problems/zero-matrix_1171153?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int row[n]={0};
	int column[m]={0};
	for(int i=0; i<n; i+=1){
		for(int j=0; j<m; j+=1){
			if(matrix[i][j]==0){
				row[i]=1;
				column[j]=1;
			}
		}
	}
	for(int i=0; i<n; i+=1){
		for(int j=0; j<m; j+=1){
			if(row[i] or column[j]){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}

// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row(n,0), col(m,0);
        for(int i=0; i<n; i+=1){
            for(int j=0; j<m; j+=1){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0; i<n; i+=1){
            for(int j=0; j<m; j+=1){
                if(row[i] or col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
