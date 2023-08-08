#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right) {}
};

/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int count = 0;
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty()){
            int sz = que.size();
             count++;
            for (int i = 0; i < sz; i++){
                TreeNode *tmp = que.front();
                que.pop();
              if(tmp->left)
                    que.push(tmp->left);
             if(tmp->right)
                   que.push(tmp->right);
             if(tmp -> left == NULL && tmp -> right == NULL)
                 return count;
             } 
        }
        return 0;
    }
};
// @lc code=end
