#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int k = 0;
        sort(citations.begin(), citations.end(),greater<int>());
        for (int i = 0 ; i < citations.size(); ++i) {
            if (i+1 <= citations[i]) {
                k=i+1;
            }
        }
        return k;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)