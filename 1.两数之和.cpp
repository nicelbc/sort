#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++){
            int value = target - nums[i];
            if(map.count(value))
                return {i, map[value]};
            else
                map[nums[i]] = i;
        }
        return {0};
    }
};
// @lc code=end

