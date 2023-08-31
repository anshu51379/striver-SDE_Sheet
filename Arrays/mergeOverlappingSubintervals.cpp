// https://www.codingninjas.com/studio/problems/merge-all-overlapping-intervals_6783452?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	// Write your code here.
	vector<vector<int>> res;
	sort(arr.begin(), arr.end());
	for(int i=0; i<arr.size(); i+=1){
		if(res.empty() or arr[i][0]>res.back()[1]){
			res.push_back(arr[i]);
		}else{
			res.back()[1]=max(res.back()[1], arr[i][1]);
		}
	}
	return res;
}

// https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
	    sort(intervals.begin(), intervals.end());
	    for(int i=0; i<intervals.size(); i+=1){
		    if(res.empty() or intervals[i][0]>res.back()[1]){
			    res.push_back(intervals[i]);
		    }else{
			    res.back()[1]=max(res.back()[1], intervals[i][1]);
		    }
	    }
	    return res;
    }
};
