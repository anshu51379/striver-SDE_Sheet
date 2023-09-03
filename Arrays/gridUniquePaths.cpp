// https://www.codingninjas.com/studio/problems/1081470?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int> tmp(n, 1);
	for(int i=1; i<m; i+=1){
		for(int j=1; j<n; j+=1){
			tmp[j]+=tmp[j-1];
		}
	}
	return tmp[n-1];
}

#include <bits/stdc++.h> 
int helper(int i, int j, int m, int n, vector<vector<int>> &dp){
	if(i==m-1 and j==n-1){
		return 1;
	}
	if(i>=m or j>=n){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	return dp[i][j]=helper(i+1, j, m, n, dp)+helper(i, j+1, m, n, dp);
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int>(n, -1));
	return helper(0, 0, m, n, dp);
}


// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);
        for(int i=1; i<m; i+=1){
            for(int j=1; j<n; j+=1){
                dp[j]+=dp[j-1]; 
            }
        }
        return dp[n-1];
    }
};

class Solution {
public:
    int helper(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i==m-1 and j==n-1){
		    return 1;
	    }
	    if(i>=m or j>=n){
		    return 0;
	    }
	    if(dp[i][j]!=-1){
		    return dp[i][j];
	    }
	    return dp[i][j]=helper(i+1, j, m, n, dp)+helper(i, j+1, m, n, dp);
    }
    int uniquePaths(int m, int n){
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp);
    }
};
