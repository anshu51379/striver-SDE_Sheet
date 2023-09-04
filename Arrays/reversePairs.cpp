// https://www.codingninjas.com/studio/problems/1112652?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h> 
int merge(vector<int> &arr, int low, int mid, int high){
	int i=low, j=mid+1;
	int cnt=0, res=0, temp[high-low+1];
	while(i<=mid and j<=high){
		long long tmp=arr[j];
		if(arr[i]>2*tmp){
			res+=mid-i+1;
			j+=1;
		}else{
			i+=1;
		}
	}
	i=low, j=mid+1;
	while(i<=mid and j<=high){
		if(arr[i]<arr[j]){
			temp[cnt++]=arr[i++];
		}else{
			temp[cnt++]=arr[j++];
		}
	}
	while(i<=mid){
		temp[cnt++]=arr[i++];
	}
	while(j<=high){
		temp[cnt++]=arr[j++];
	}
	cnt=0;
	for(int i=low; i<=high; i+=1){
		arr[i]=temp[cnt++];
	}
	return res;
}
int mergeSort(vector<int> &arr, int low, int high){
	int res=0;
	if(low<high){
		int mid=low+(high-low)/2;
		res+=mergeSort(arr, low, mid);
		res+=mergeSort(arr, mid+1, high);
		res+=merge(arr, low, mid, high);
	}
	return res;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	return mergeSort(arr, 0, n-1);
}

// https://leetcode.com/problems/reverse-pairs/

class Solution {
public:
    int cnt=0;
    void merge(vector<int> &nums, int low, int mid, int high){
        int i=low, j=mid+1;
        while(i<=mid and j<=high){
            long long tmp=nums[j];
            if(nums[i]>2*tmp){
                cnt+=mid-i+1;
                j+=1;
            }else{
                i+=1;
            }
        }
        sort(nums.begin()+low, nums.begin()+high+1);
    }
    void mergeSort(vector<int> &nums, int low, int high){
        if(low>=high){
            return;
        }
        int mid=(low+high)/2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    // void countPairs(vector<int> &arr, int low, int mid, int high){
    //     int right=mid+1;
    //     while(right<=high){
    //         for(int i=low; i<=mid; i+=1){
    //             while(right<=high and arr[i]>2*arr[right]){
    //                 right+=1;
    //             }
    //             cnt+=(right-(mid+1));
    //         }
    //     }
    // }
    int reversePairs(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        mergeSort(nums, 0, nums.size()-1);
        return cnt;
    }
};
