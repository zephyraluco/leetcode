#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums_cast = vector<int>(nums1.begin(), nums1.begin() + m);
        int i = 0,j = 0;
        while (i < m || j < n) {
            if (i == m) {
                nums1[i+j-1] = nums2[j++];
            }else if (j == n) {
                nums1[i+j-1] = nums_cast[i++];
            }else if (nums_cast[i] <= nums2[j]) {
                nums1[i+j] = nums_cast[i];
                i++;
            }else {
                nums1[i+j] = nums2[j];
                j++;
            }
        }
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)