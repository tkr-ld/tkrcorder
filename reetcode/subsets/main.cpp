#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> Ans;
        for (int bit = 0; bit < (1<<size); ++bit) {
            vector<int> S;
            for (int i = 0; i < size; ++i) {
                if (bit & (1<<i)) {
                    S.push_back(nums[i]);
                }
            }
            Ans.push_back(S);
        }
        return Ans;
    }
};

int main() { 
    Solution s;

    vector<int> v1{1,2,3};
    
    vector<vector<int>> vv1 = s.subsets(v1);
    
    return 0;
}
