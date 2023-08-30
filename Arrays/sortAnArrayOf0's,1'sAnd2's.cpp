// https://www.codingninjas.com/studio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   sort(arr, arr+n);
}

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low=0, mid=0, high=n-1;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[mid], arr[low]);
         mid+=1;
         low+=1;
      }else if(arr[mid]==1){
         mid+=1;
      }else{
         swap(arr[mid], arr[high]);
         high-=1;
      }
   }
}

// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                mid+=1;
                low+=1;
            }else if(nums[mid]==1){
                mid+=1;
            }else{
                swap(nums[mid], nums[high]);
                high-=1;
            }
        }
    }
};
