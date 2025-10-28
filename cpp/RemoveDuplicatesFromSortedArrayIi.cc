#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =0, i= 0;
        for (const auto v: nums) {
            if (v != nums[k]) {
                i = 0;
                nums[++k] = v;
            }else if (i == 1) {
                nums[++k] = v;
            }
            i++;
        }
        return k+1;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)