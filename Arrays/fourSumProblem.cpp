// https://www.codingninjas.com/studio/problems/4sum_5713771?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i=0; i<nums.size(); i+=1){
        if(i>0 and nums[i]==nums[i-1]){
            continue;
        }
        for(int j=i+1; j<nums.size(); j+=1){
            if(j!=i+1 and nums[j]==nums[j-1]){
                continue;
            }
            int k=j+1, l=nums.size()-1;
            while(k<l){
                long long sum=nums[i]+nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum==target){
                    vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                    res.push_back(temp);
                    k+=1;
                    l-=1;
                    while(k<l and nums[k]==nums[k-1]){
                        k+=1;
                    }
                    while(k<l and nums[l]==nums[l+1]){
                        l-=1;
                    }
                }else if(sum<target){
                    k+=1;
                }else{
                    l-=1;
                }
            }
        }
    }
    return res;
}

// https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); i+=1){
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1; j<nums.size(); j+=1){
                if(j!=i+1 and nums[j]==nums[j-1]){
                    continue;
                }
                int k=j+1, l=nums.size()-1;
                while(k<l){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                        res.push_back(temp);
                        k+=1;
                        l-=1;
                        while(k<l and nums[k]==nums[k-1]){
                            k+=1;
                        }
                        while(k<l and nums[l]==nums[l+1]){
                            l-=1;
                        }
                    }else if(sum<target){
                        k+=1;
                    }else{
                        l-=1;
                    }
                }
            }
        }
        return res;
    }
};
