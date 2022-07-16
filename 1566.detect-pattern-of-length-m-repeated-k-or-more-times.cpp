/*
 * @lc app=leetcode id=1566 lang=cpp
 *
 * [1566] Detect Pattern of Length M Repeated K or More Times
 */

// @lc code=start
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if(k*m>arr.size()) return false;
        int ans=0;
       for (int i=0;i+m<arr.size();i++){
           if(arr[i+m]!=arr[i])
               ans=0;
           if(arr[i+m]==arr[i])
               ans++;
           if(ans==(k-1)*m) return true;
       }
        return false;  
    }
};
// @lc code=end

