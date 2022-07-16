/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> sol;
    void dfs(TreeNode *node, vector<int> &curr){
    curr.push_back(node->val);
    if (!node->right && !node->left){
        string s;
        stringstream ss;
        //print the path
        for (int i = 0; i < curr.size()-1;i++){
            ss << curr[i] << "->";
        }
        ss << curr[curr.size() - 1];
        s=ss.str();
        sol.push_back(s);
    }
    if(node->right)
        dfs(node->right,curr);
    if(node->left){
        dfs(node->left,curr);
    }
    curr.pop_back(); 
    }  

     vector<string> binaryTreePaths(TreeNode *root)
        {
            vector<int> temp;
            if(!root)
                return sol;
            dfs(root, temp);
            return sol;
        }
};
// @lc code=end

