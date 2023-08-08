#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr){}
};
/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr)
            return {};
        vector<vector<int>> ret;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int sz = que.size();
            vector<int> tmpvec;
            for (int i = 0; i < sz; i++){
                TreeNode *tmpnode = que.front();
                que.pop();
                tmpvec.push_back(tmpnode->val);
                if(tmpnode -> left)
                    que.push(tmpnode->left);
                if(tmpnode -> right)
                    que.push(tmpnode->right);
            }
            ret.push_back(tmpvec);
        }
        return ret;
    }
};
// @lc code=end

