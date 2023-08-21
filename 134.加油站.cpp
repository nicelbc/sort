/*
 * @lc app=leetcode.cn id=134 lang=cpp
 *
 * [134] 加油站
 */

// @lc code=start
class Solution {
public:
int canCompleteCircuit(vector<int>& gas, vector<int>& cost){                                              
    int total = 0;
    int n = gas.size();
    for(int i = 0; i < n; i++){
        total += gas[i] - cost[i];
    }   
    if(total < 0)  return -1; 
    int start = 0;
    total = 0;
    for(int i = 0; i < n; i++){
        total += gas[i] - cost[i];
        if(total < 0){ 
            total = 0;
            start = i + 1;
        }
    }   
    return start;
}
};
// @lc code=end

