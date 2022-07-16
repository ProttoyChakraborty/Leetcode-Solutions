/*
 * @lc app=leetcode id=199 lang=cpp
 *
 * [199] Binary Tree Right Side View
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
    vector<int> f;
    void bfs(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int levelSize = q.size();
            while(levelSize) {
                TreeNode *curr = q.front();
                q.pop();
                if(levelSize == 1)
                    f.push_back(curr->val);
                
                if(curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
                levelSize--;
            }
        }
    }

    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return f;
        bfs(root);
        return f;
    }
};
// @lc code=end

