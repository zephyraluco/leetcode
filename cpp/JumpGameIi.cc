#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int jump(vector<int>& nums) {
        int min_site = 0,max_jump = 0,k=0 ;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > min_site) {
                min_site = max_jump;
                k++;
            }
            if (nums[i] +i > max_jump) {
                max_jump = nums[i] + i;
            }
        }
        return k;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)