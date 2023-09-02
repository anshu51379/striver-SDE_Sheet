// https://www.codingninjas.com/studio/problems/majority-element_6915220?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	unordered_map<int, int> tmp;
	vector<int> res;
	for(int i=0; i<v.size(); i+=1){
		tmp[v[i]]+=1;
	}
	for(auto it:tmp){
		if(it.second>floor(v.size()/3)){
			res.push_back(it.first);
		}
	}
	sort(res.begin(), res.end());
	return res;
}

#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> res;
	int tmp1=0, tmp2=0, el1=INT_MIN, el2=INT_MIN, cnt1=0, cnt2=0;
	for(int i=0; i<v.size(); i+=1){
		if(!tmp1 and el2!=v[i]){
			tmp1=1;
			el1=v[i];
		}else if(!tmp2 and el1!=v[i]){
			tmp2=1;
			el2=v[i];
		}else if(el1==v[i]){
			tmp1+=1;
		}else if(el2==v[i]){
			tmp2+=1;
		}else{
			tmp1-=1;
			tmp2-=1;
		}
	}
	for(int i=0; i<v.size(); i+=1){
		if(el1==v[i]){
			cnt1+=1;
		}
		if(el2==v[i]){
			cnt2+=1;
		}
	}
	if(cnt1>floor(v.size()/3)){
		res.push_back(el1);
	}
	if(cnt2>floor(v.size()/3)){
		res.push_back(el2);
	}
	return res;
}

// https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> tmp;
	    vector<int> res;
	    for(int i=0; i<nums.size(); i+=1){
		    tmp[nums[i]]+=1;
	    }
	    for(auto it:tmp){
		    if(it.second>floor(nums.size()/3)){
			    res.push_back(it.first);
		    }
	    }
	    return res;
    }
};

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
	    int tmp1=0, tmp2=0, el1=INT_MIN, el2=INT_MIN, cnt1=0, cnt2=0;
	    for(int i=0; i<nums.size(); i+=1){
		    if(!tmp1 and el2!=nums[i]){
			    tmp1=1;
			    el1=nums[i];
		    }else if(!tmp2 and el1!=nums[i]){
			    tmp2=1;
			    el2=nums[i];
		    }else if(el1==nums[i]){
			    tmp1+=1;
		    }else if(el2==nums[i]){
			    tmp2+=1;
		    }else{
			    tmp1-=1;
			    tmp2-=1;
		    }
	    }
	    for(int i=0; i<nums.size(); i+=1){
		    if(el1==nums[i]){
			    cnt1+=1;
		    }
		    if(el2==nums[i]){
			    cnt2+=1;
		    }
	    }
	    if(cnt1>floor(nums.size()/3)){
		    res.push_back(el1);
	    }
	    if(cnt2>floor(nums.size()/3)){
		    res.push_back(el2);
	    }
	    return res;
    }
};
