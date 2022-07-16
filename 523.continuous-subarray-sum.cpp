/*
 * @lc app=leetcode id=523 lang=cpp
 *
 * [523] Continuous Subarray Sum
 */

// @lc code=start
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp.insert({0, -1});
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int r = sum % k;
            if(mp.find(r) == mp.end())
                mp.insert({r, i});
            else if(i-mp[r]>1)
                return true;
    }
     return false;
    }
};
// @lc code=end

