// https://www.codingninjas.com/studio/problems/best-time-to-buy-and-sell-stock_6194560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int res=0, tmp=INT_MAX;
    for(auto it:prices){
        tmp=min(tmp, it);
        res=max(res, it-tmp);
    }
    return res;
}

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0, tmp=INT_MAX;
        for(auto it:prices){
            tmp=min(tmp, it);
            res=max(res, it-tmp);
        }
        return res;
    }
};
