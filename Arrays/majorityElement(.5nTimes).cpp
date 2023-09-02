// https://www.codingninjas.com/studio/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	unordered_map<int, int> tmp;
	for(int i=0; i<v.size(); i+=1){
		tmp[v[i]]+=1;
	}
	for(auto it:tmp){
		if(it.second>(v.size()/2)){
			return it.first;
		}
	}
	return -1;
}

int majorityElement(vector<int> v) {
	// Write your code here
	sort(v.begin(), v.end());
	return v[v.size()/2];
}

// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[(nums.size())/2];
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> tmp;
	    for(int i=0; i<nums.size(); i+=1){
		    tmp[nums[i]]+=1;
	    }
	    for(auto it:tmp){
		    if(it.second>(nums.size()/2)){
			    return it.first;
		    }
	    }
	    return -1;
    }
};

// mostOptimal
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0, ele=0, tmp=0;
        for(int i=0; i<nums.size(); i+=1){
            if(!cnt){
                cnt=1;
                ele=nums[i];
            }else if(nums[i]==ele){
                cnt+=1;
            }else{
                cnt-=1;
            }
        }
        for(int i=0; i<nums.size(); i+=1){
            if(ele==nums[i]){
                tmp+=1;
            }
        }
        if(tmp>nums.size()/2){
            return ele;
        }
        return -1;
    }
};
