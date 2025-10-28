#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =0;
        for (auto v: nums) {
            if (v != nums[k]) {
                nums[++k] = v;
            }
        }
        return k+1;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)