// https://www.codingninjas.com/studio/problems/merge-two-sorted-arrays-without-extra-space_6898839?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int tmp1=a.size()-1, tmp2=0;
	while(tmp1>=0 and tmp2<b.size()){
		if(a[tmp1]>b[tmp2]){
			swap(a[tmp1], b[tmp2]);
			tmp1-=1;
			tmp2+=1;
		}else{
			break;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}

// https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i+=1){
            nums1[i+m]=nums2[i];
        }
        inplace_merge(nums1.begin(), nums1.begin()+m, nums1.end());
    }
};
