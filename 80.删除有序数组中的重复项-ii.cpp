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
        if(nums.size() == 1)
            return 1;
        
        int p = 0;
        int count = 1;
        for (int i = 1; i < nums.size(); i++){
          if(nums[i] == nums[p]){
              //count++;
              if(count + 1 < 3){
                  nums[++p] = nums[i];
                  count++;
              } else {
                  //nums[++p] = nums[++i];
                  while(i + 1 < nums.size() && nums[i + 1] == nums[p])
                      i++;
                  //count = 1;
              }
          } else if(nums[i] != nums[p]){
              count = 1;
              nums[++p] = nums[i];
          }
        }
        return ++p;
    }
};
// @lc code=end

