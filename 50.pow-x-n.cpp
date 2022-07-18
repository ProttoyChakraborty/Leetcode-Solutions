/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        int flag = 0;
        if(n==0)
            return 1;
        if(n<0){
            flag = 1;
            x = 1 / x;
            n = abs(n);
        }
        if(n==1)
           return x;
        if(n%2==0){
            return myPow(x * x, n / 2);
        }
        else{
           return myPow(x*x, (n - 1) / 2)* x;
        }
    }
};
// @lc code=end

