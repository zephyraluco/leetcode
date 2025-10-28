#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0,k = -1,part = 0;
        for (int i = 0; i < gas.size(); ++i) {
            int temp = gas[i] - cost[i];
            sum += temp;
            if (part < 0) {
                k = -1;
                part = 0;
            }
            if (temp >= 0 && k <0) {
                k= i;
            }
            if (k >= 0) {
                part += temp;
            }
        }
        if (sum < 0) {
            return -1;
        }
        return k;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)