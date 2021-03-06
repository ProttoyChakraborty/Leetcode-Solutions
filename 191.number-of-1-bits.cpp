/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t sum = 0;
        while(n){
            n &= n - 1;
            sum++;
        }
        return sum;
    }
};
// @lc code=end

