#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int candy(vector<int>& ratings) {
    if (ratings.size() <= 1) return 1;
    int sum = 1; int k =1,pre = 0;
    for (int i = 1; i < ratings.size() ; ++i) {
        if (ratings[i] < ratings[i-1]) {
            pre += 1;
            sum += pre;
            k = 1;
        }else if (ratings[i] == ratings[i-1]) {
            pre = 0;
            if (k > 1) {
                k=1;
            }
        }
        else {
            pre = 0;
            k ++;
        }
        sum += k;
    }
    return sum;
}
int main() {
    std::vector<int> nums1 = {1,3,2,2,1};
    std::vector<int> nums2 = {1};
    // merge(nums1,1,nums2,1);
    auto k = candy(nums1);
    return 0;
}