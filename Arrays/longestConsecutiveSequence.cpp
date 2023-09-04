// https://www.codingninjas.com/studio/problems/759408?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    if(!n){
        return 0;
    }
    sort(arr.begin(), arr.end());
    int lastOne=INT_MIN, cnt=0, res=1;
    for(int i=0; i<n; i+=1){
        if(arr[i]-1==lastOne){
            cnt+=1;
            lastOne=arr[i];
        }else if(lastOne!=arr[i]){
            cnt=1;
            lastOne=arr[i];
        }
        res=max(res, cnt);
    }
    return res;
}

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int res=1;
    unordered_set<int> tmp;
    for(int i=0; i<n; i+=1){
        tmp.insert(arr[i]);
    }
    for(auto it:tmp){
        if(tmp.find(it-1)==tmp.end()){
            int cnt=1, x=it;
            while(tmp.find(x+1)!=tmp.end()){
                x+=1;
                cnt+=1;
            }
            res=max(res, cnt);
        }
    }
    return res;
}

// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int cnt=0, res=1, lastOne=INT_MIN;
        for(int i=0; i<nums.size(); i+=1){
            if(nums[i]-1==lastOne){
                cnt+=1;
                lastOne=nums[i];
            }else if(nums[i]!=lastOne){
                cnt=1;
                lastOne=nums[i];
            }
            res=max(res, cnt);
        }
        return res;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        int res=1, x=0, cnt=0;
        unordered_set<int> tmp;
        for(int i=0; i<nums.size(); i+=1){
            tmp.insert(nums[i]);
        }
        for(auto it:tmp){
            if(tmp.find(it-1)==tmp.end()){
                cnt=1, x=it;
            }
            while(tmp.find(x+1)!=tmp.end()){
                x+=1;
                cnt+=1;
            }
            res=max(res, cnt);
        }
        return res;
    }
};
