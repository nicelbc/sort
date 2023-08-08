#include<bits/stdc++.h>

using namespace std;

 void func(){
    cout << "func" << endl;
 }

int main(){
    func();
    vector<int> v;
    return 0;
}

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> umap;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        int count = 0;
        int i = 0;
        for (; i < s.size() - 1; i++){
            int  n1 = umap[s[i]], n2 = umap[s[i + 1]];
            if(n1 < n2){
                count += n2 - n1;
                i++;
            }else{
                count += n1;
            }
        }
        if(i == s.size() - 1){
            count += umap[s[i]];
        }
        return count;
    }
};