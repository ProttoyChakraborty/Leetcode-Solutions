/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1)
            return 0;
        int postSum[prices.size()];
        int max=INT_MIN;
        postSum[prices.size() - 1] = 0;
        for (int i = prices.size() - 1; i > 0;i--){
            if(prices[i] > max){
                max=prices[i];
        }
        postSum[i - 1] = max;
    }
    int MaxProfit=0;
    for (int i = 0;i<prices.size();i++){
        if(postSum[i]-prices[i]>MaxProfit)
            MaxProfit=postSum[i]-prices[i]; //highest value for the stock
    }
        return MaxProfit;
}
};
// @lc code=end

