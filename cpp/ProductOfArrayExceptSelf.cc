#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector res(nums.size(),1);
        for (int i = 0; i < nums.size() -1; i++) {
            res[i+1] = res[i] * nums[i];
        }
        int temp = 1;
        for (int j = nums.size() -1 ; j > 0; j--) {
            temp *= nums[j];
            res[j-1] *= temp;
        }
        return res;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)