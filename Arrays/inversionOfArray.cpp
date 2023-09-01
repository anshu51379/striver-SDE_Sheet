// https://www.codingninjas.com/studio/problems/count-inversions_615

#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int cnt=0;
    for(int i=0; i<n-1; i+=1){
        for(int j=i+1; j<n; j+=1){
            if(arr[i]>arr[j]){
                cnt+=1;
            }
        }
    }
    return cnt;
}

// another approach using merge sort
// add cnt=mid-low+1 inside the mergeSort function and return the cnt from main function.
