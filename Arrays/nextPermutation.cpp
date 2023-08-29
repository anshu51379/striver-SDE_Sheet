// https://www.codingninjas.com/studio/problems/next-greater-permutation_6929564?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    next_permutation(A.begin(), A.end());
    return A;
}

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int index=-1;
    for(int i=A.size()-2; i>=0; i-=1){
        if(A[i]<A[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(A.begin(), A.end());
        return A;
    }
    for(int i=A.size()-1; i>index; i-=1){
        if(A[i]>A[index]){
            swap(A[i], A[index]);
            break;
        }
    }
    reverse(A.begin()+index+1, A.end());
    return A;
}

// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums){
        next_permutation(nums.begin(), nums.end());
    }
};
