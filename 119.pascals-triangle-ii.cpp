/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> sol;
    void helper(int i,int r){
        if(i==r+1){
            return;
        }
        vector<int> curr;
        curr.push_back(1);
        for (int j = 1; j<i;j++){
            curr.push_back(sol[1][j] + sol[1][j - 1]);
        }
        curr.push_back(1);
        sol[0] = sol[1];
        sol[1] = curr;
        return helper(i + 1,r);
    } 


    vector<int> getRow(int rowIndex) {
        sol.push_back({1});
        sol.push_back({ 1, 1 });
        if(rowIndex == 0)
            return sol[0];
       
        if (rowIndex == 1)
        {
            return sol[1];
        }
        sol[0] = sol[1];
        helper(2, rowIndex);
        return sol[1];
    }
};
// @lc code=end

