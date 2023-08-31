// https://www.codingninjas.com/studio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int, int> tmp;
	for(int i=0; i<n; i+=1){
		tmp[arr[i]]+=1;
	}
	for(auto it:tmp){
		if(it.second>1){
			return it.first;
		}
	}
	return -1;
}

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int slow=arr[0], fast=arr[0];
	do{
		slow=arr[slow];
		fast=arr[arr[fast]];
	}while(slow!=fast);
	fast=arr[0];
	while(slow!=fast){
		slow=arr[slow];
		fast=arr[fast];
	}
	return slow;
	// return fast;
}


// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> tmp;
	    for(int i=0; i<nums.size(); i+=1){
		    tmp[nums[i]]+=1;
	    }
	    for(auto it:tmp){
		    if(it.second>1){
			    return it.first;
		    }
	    }
        return -1;
    }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0], fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
    }
};
