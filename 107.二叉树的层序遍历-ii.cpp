
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if(root == NULL)
            return ret;
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
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
// @lc code=end

