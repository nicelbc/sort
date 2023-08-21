/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> ret;
    sort(nums.begin(), nums.end());
    int j, k, target;
    int n = nums.size();
    for(int i = 0; i < n - 2; i++){
        if(i != 0 && nums[i] == nums[i- 1]){
            i++;
            continue;
        }
        j = i + 1;
        k = n - 1;
        while(j < k){
           // if(nums[j] == nums[j - 1]) {
             //   j++;
               // continue;
           // }
            target = nums[i] + nums[j] + nums[k];
            if(target == 0){
                ret.push_back({nums[i], nums[j], nums[k]});
                while(j < k && nums[j] == nums[j + 1]) j++;
                j++;

                while(j < k && nums[k] == nums[k - 1]) k--;
                k--;

               // cout << i << " " << j << " " << k << endl;
            } else if(target > 0){
                k--;
            } else if(target < 0){
                j++;
            }
        }

    }

    return ret;
}            



};
// @lc code=end

