/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long long n = 0;
        int pre = x;
        while(x){
            n = n * 10 + x % 10;
            x /= 10;
        }
        return n == pre;
    }
};
// @lc code=end

