/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> sol;
    void helper(int i,int r){
        if(i==r){
            return;
        }
        vector<int> curr;
        curr.push_back(1);
        for (int j = 1; j < i;j++){
            curr.push_back(sol[i-1][j] + sol[i-1][j - 1]);
        }
        curr.push_back(1);
        sol.push_back(curr);
        return helper(i + 1,r);
    } 
    vector<vector<int>> generate(int numRows) {
        sol.push_back({1});
        if(numRows == 1)
            return sol;
        sol.push_back({ 1, 1 });
        if (numRows == 2)
        {
            return sol;
        }
        helper(2, numRows);
        return sol;
    }
};
// @lc code=end

