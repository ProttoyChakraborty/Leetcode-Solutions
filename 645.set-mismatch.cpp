/*
 * @lc app=leetcode id=645 lang=cpp
 *
 * [645] Set Mismatch
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> f(nums.size()+1, 0);
        for (auto x: nums){
                f[x]++;
        }
        int dup, missing;
        for (int i = 1;i<f.size();i++) {
            if( f[i]==0){
                missing = i;
            }
            if(f[i]==2){
                dup = i;
            }
     
    }
     return {dup,missing};
    }
};
// @lc code=end

