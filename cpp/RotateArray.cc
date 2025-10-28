#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        auto move = k % nums.size();
        reverse(nums.begin(), nums.end()-move);
        reverse(nums.end()-move, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)