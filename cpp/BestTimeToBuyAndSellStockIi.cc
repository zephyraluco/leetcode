#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  profit = 0;
        for (int i = 1 ; i<prices.size();i++) {
            if (prices[i] > prices[i-1]) {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)