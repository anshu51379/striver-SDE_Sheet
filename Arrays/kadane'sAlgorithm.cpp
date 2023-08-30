// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp=0, res=INT_MIN;
        for(int i=0; i<nums.size(); i+=1){
            tmp=max(tmp+nums[i], nums[i]);
            res=max(res, tmp);
        }
        return res;
    }
};

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, res=INT_MIN;
        for(int i=0; i<nums.size(); i+=1){
            sum+=nums[i];
            if(sum>res){
                res=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return res;
    }
};

// https://www.codingninjas.com/studio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum=0, res=LONG_MIN;
    for(int i=0; i<n; i+=1){
        sum+=arr[i];
        if(sum>res){
            res=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(res<0){
        return 0;
    }
    return res;
}
