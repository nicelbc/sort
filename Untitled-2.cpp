#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len < 2)
            return len;

        int p = 0;
        int count = 1;
        for (int i = 1; i < len; i++){
          if(nums[i] == nums[p] && count < 2){
                nums[++p] = nums[i];
                count++;
          } else if(nums[i] != nums[p]){
              count = 1;
              nums[++p] = nums[i];
          }
        }
        return ++p;
    }
};
// @lc code=end

int main(){
    Solution msolution;
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int ret = 0;
    ret = msolution.removeDuplicates(nums);
    for(int i = 0; i < ret; i++){
        cout << nums[i] << " ";
    }

    return 0;
}

