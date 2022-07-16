/*
 * @lc app=leetcode id=2221 lang=cpp
 *
 * [2221] Find Triangular Sum of an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> curr, prev;
    void helper(vector<int> &nums){
            curr.clear();
            if(nums.size()==1){
                return;
            }
        for(int k=0;k<nums.size()-1;k++){
            curr.push_back((nums[k]+nums[k+1])%10);
        }
        prev=curr;
        helper(prev);
    }
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        helper(nums);
        return curr[0];
    }
};
// @lc code=end

