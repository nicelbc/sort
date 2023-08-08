/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
int jump(vector<int>& nums){
    int count = 0;
    int boarder = 0;//边界
    int end = 0;//最远位置下标
    for(int i = 0; i < nums.size() - 1; i++){
        end = std::max(end, i + nums[i]);
        if(i == boarder){
            count++;
            boarder = end;
        }
    }

    return count;

}




};
// @lc code=end

