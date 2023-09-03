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
