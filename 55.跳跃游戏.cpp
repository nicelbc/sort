/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
bool canJump(vector<int>& nums){
    int len = nums.size();
    int i = 0;
    int last = 0;
    while(last < len - 1){
        last = max(last, i + nums[i]);
        
        if(last == i) return false;
        i++;
    }
    
    return true;
}


};
// @lc code=end

