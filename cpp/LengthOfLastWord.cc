#include <bits/stdc++.h>
using namespace std;


//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0;
        for (auto it = s.crbegin(); it != s.crend(); ++it) {
            if (*it != ' ') {
                size++;
            }
            if (*it == ' ' && size>0) {
                break;
            }
        }
        return size;
    }
};
//IMPORTANT!! Submit Code Region End(Do not remove this line)