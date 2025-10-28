#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_jump = 0;
        for (int i = 0; i < nums.size() ; i++) {
            if (nums[i] + i > max_jump && i <= max_jump) {
                max_jump = nums[i] + i;
            }
        }
        return max_jump >= nums.size() -1 ;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)