// https://www.codingninjas.com/studio/problems/search-in-a-2d-matrix_980531?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

bool searchMatrix(vector<vector<int>>& mat, int target) {
        for(int i=0; i<mat.size(); i+=1){
            for(int j=0; j<mat[0].size(); j+=1){
                if(mat[i][j]==target){
                    return true;
                }
            }
        }
        return false;
}

// https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i+=1){
            for(int j=0; j<matrix[0].size(); j+=1){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()){
	        return false;
	    }
        int N=matrix.size(), M=matrix[0].size();
	    int low=0, high=(N*M)-1;
	    while(low<=high){
	        int mid=low+(high-low)/2;
	        if(matrix[mid/M][mid%M]==target){
	            return true;
	        }else if(matrix[mid/M][mid%M]<target){
	            low=mid+1;
	        }else{
	            high=mid-1;
	        }
	    }
	    return false;
    }
};
