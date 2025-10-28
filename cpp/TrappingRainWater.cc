#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int trap(vector<int>& height) {
        int max_left = 0,max_right =0;
        int sum = 0;
        for (int i = 0; i < height.size(); ++i) {
            if (height[i] > height[max_right]) {
                max_right = i;
                if (height[max_right] >height[max_left]) {
                    max_left = max_right;
                }
            }
            sum += height[i];
        }
        int k = 0,temp = 0;
        for (int i = 0; i < max_left; ++i) {
            if (k< height[i]) {
                k = height[i];
            }
            temp += k;
        }
        k = 0;
        for (int i = height.size() -1 ; i > max_right ; --i) {
            if (k< height[i]) {
                k = height[i];
            }
            temp += k;
        }
        return temp+height[max_left]*(max_right-max_left+1) - sum;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)