/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int len = nums.size();
    k %= len;
    //output(nums);
    reverse(nums, 0, len - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, len - 1);
    //output(nums);

    }

    void reverse(vector<int>& nums, int start, int end){
    while(start <= end){
        int tmp = nums[start];
        nums[start] = nums[end];
        nums[end] = tmp;
        start++;
        end--;
    }
}

};
// @lc code=end

