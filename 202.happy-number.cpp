/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int res(int n){
        int x = 0;
        while(n){
            x += (n % 10) * (n % 10);
            n /= 10;
        }
        return x;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(true){
            int t = res(n);
            if(t==1){
                return true;
            }
            else if (s.find(t)!=s.end()){
                return false;
            }
            s.insert(t);
            n = t;
        }
    }
};
// @lc code=end

