/*
 * @lc app=leetcode id=908 lang=cpp
 *
 * [908] Smallest Range I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int Max=*max_element(nums.begin(), nums.end());
        int Min = *min_element(nums.begin(), nums.end());
        return max(0, Max-Min- 2 * k);
    }
};
// @lc code=end

