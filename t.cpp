#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;


class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ret = 0;
        for (int i = 0; i < s.size(); i++){
            int count = 0;
            for (int j = 0; j < k; j++){
                count = count * 10 + (s[i+j] - '0');
            }
            if(count && num % count == 0)
                ret++;
        }
        return ret;
    }
};

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int len = nums.size();
        int ret = 0;
        vector<int> pre(len + 1, 0);
        for (int i = 1; i < len + 1; i++){
            pre[i] = pre[i - 1] + nums[i - 1];
        }
        for (int i = 0; i < len - 1; i++){
            int presum = pre[i + 1];
            int lastsum = pre[len] - pre[i + 1];
            if(presum >= lastsum)
                ret++;
        }

        return ret;
    }
};

int main(){
    int a[10];
    for (int i = 0; i < 10; i++){
        cout << a[i] << endl;
    }
    
}