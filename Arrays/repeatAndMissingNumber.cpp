// https://www.codingninjas.com/studio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int mis=-1, rep=-1;
	int hash[n+1]={0};
	for(int i=0; i<n; i+=1){
		hash[arr[i]]+=1;
	}
	for(int i=1; i<=n; i+=1){
		if(hash[i]==2){
			rep=i;
		}else if(!hash[i]){
			mis=i;
		}
		if(mis!=-1 and rep!=-1){
			break;
		}
	}
	return {mis, rep};
}

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int xr=0;
	for(int i=0; i<n; i+=1){
		xr^=arr[i];
		xr^=(i+1);
	}
	int bitNo=0;
	while(1){
		if((xr & (1<<bitNo))!=0){
			break;
		}
		bitNo+=1;
	}
	int one=0, zero=0;
	for(int i=0; i<n; i+=1){
		if((arr[i] & (1<<bitNo))!=0){
			one^=arr[i];
		}else{
			zero^=arr[i];
		}
	}
	for(int i=1; i<=n; i+=1){
		if(i & (1<<bitNo)){
			one^=i;
		}else{
			zero^=i;
		}
	}
	int cnt=0;
	for(int i=0; i<n; i+=1){
		if(arr[i]==zero){
			cnt+=1;
		}
	}
	if(cnt==2){
		return {one, zero};
	}
	return {zero, one};
}


// https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    vector<int> res;
    int xr=0;
	for(int i=0; i<n; i+=1){
		xr^=A[i];
		xr^=(i+1);
	}
	int bitNo=0;
	while(1){
		if((xr & (1<<bitNo))!=0){
			break;
		}
		bitNo+=1;
	}
	int one=0, zero=0;
	for(int i=0; i<n; i+=1){
		if((A[i] & (1<<bitNo))!=0){
			one^=A[i];
		}else{
			zero^=A[i];
		}
	}
	for(int i=1; i<=n; i+=1){
		if(i & (1<<bitNo)){
			one^=i;
		}else{
			zero^=i;
		}
	}
	int cnt=0;
	for(int i=0; i<n; i+=1){
		if(A[i]==zero){
			cnt+=1;
		}
	}
	if(cnt==2){
		res.push_back(zero);
        res.push_back(one);
        return res;
	}
	res.push_back(one);
    res.push_back(zero);
    return res;
}
