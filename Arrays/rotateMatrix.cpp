// https://www.codingninjas.com/studio/problems/981260?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int a=0, b=m-1, c=0, d=n-1;
    while(a<b and c<d){
        int tmp=mat[a][c];
        for(int i=a+1; i<=d; i+=1){
            mat[i-1][c]=mat[i][c];
        }
        for(int i=c+1; i<=b; i+=1){
            mat[d][i-1]=mat[d][i];
        }
        for(int i=d-1; i>=a; i-=1){
            mat[i+1][b]=mat[i][b];
        }
        for(int i=b-1; i>=c; i-=1){
            mat[a][i+1]=mat[a][i];
        }
        mat[a][c+1]=tmp;
        a++; c++;
        b--; d--;
    }

}

// https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size()-1; i+=1){
            for(int j=0; j<matrix.size()-i; j+=1){
                swap(matrix[i][j], matrix[matrix.size()-1-j][matrix.size()-1-i]);
            }
        }
        reverse(matrix.begin(), matrix.end());
    }
};
