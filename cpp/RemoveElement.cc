#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (auto v: nums) {
            if (v != val) {
                nums[k++] = v;
            }
        }
        return k;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)