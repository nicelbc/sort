#include<bits/stdc++.h>

using namespace std;
/*
 * @lc app=leetcode.cn id=752 lang=cpp
 *
 * [752] 打开转盘锁
 */

// @lc code=start
class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_map<string, int> deadmap;
        unordered_set<string> visited;
        int step = 0;
        for(string s: deadends)
            deadmap[s]++;
        queue<string> que;
        que.push("0000");
        visited.insert("0000");
        while(!que.empty()){
            int sz = que.size();
            //==target count the step;
            for (int i = 0; i < sz; i++){
                string tmp = que.front();
                que.pop();
                if(deadmap.count(tmp))
                    continue;
                if(target == tmp){
                    //cout << tmp;
                    return step;
                }
                    
                for (int j = 0; j < 4; j++){
                    string up = Up(tmp, j);
                    if(!visited.count(up)){
                        //cout << up << " ";
                        que.push(up);
                        visited.insert(up);
                    }
                    string down = Down(tmp,j);
                    if(!visited.count(down)){
                        //cout << down << " ";
                        que.push(down);
                        visited.insert(down);
                    }
                    //cout << endl;
                }
            }
            step++;
        }
        return -1;
    }
    
    string Up(string s, int index){
        if(s[index] == '9')
            s[index] = '0';
        else
            s[index] += 1;
        return s;
    }
    string Down(string s, int index){
        if(s[index] == '0')
            s[index] = '9';
        else
            s[index] -= 1;
        return s;
    }
};
// @lc code=end

