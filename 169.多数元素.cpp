#include<bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
int majorityElement(vector<int> &nums){
	
	if(nums.size() == 1) return nums[0];
	int ret = nums[0];
	int count = 1;
	for(int i = 1; i < nums.size(); i++){
		if(nums[i] == ret) count++;
		else{
			count--;
			if(!count){
				ret = nums[i];
				count = 1;
			}
		}

			
	}
	return ret;


}
};
// @lc code=end

