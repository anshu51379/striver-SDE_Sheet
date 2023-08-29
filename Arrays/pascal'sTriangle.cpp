// https://www.codingninjas.com/studio/problems/print-pascal-s-triangle_6917910?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

vector<int> generateList(int row){
    vector<int> ans;
    ans.push_back(1);
    int tmp=1;
    for(int col=1; col<row; col+=1){
        tmp*=(row-col);
        tmp/=col;
        ans.push_back(tmp);
    }
    return ans;
}
vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> res;
    for(int i=1; i<=N; i+=1){
        vector<int> tmp;
        tmp=generateList(i);
        res.push_back(tmp);
    }
    return res;
}

// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<int> generateRows(int row){
        vector<int> tmp;
        tmp.push_back(1);
        int ans=1;
        for(int col=1; col<row; col+=1){
            ans*=(row-col);
            ans/=col;
            tmp.push_back(ans);
        }
        return tmp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1; i<=numRows; i+=1){
            res.push_back(generateRows(i));
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0; i<numRows; i+=1){
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1; j<i; j+=1){
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
    }
};
