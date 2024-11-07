#pragma once

class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x;
        unsigned int res = 0;
        int last_num = 0;
        while (tmp > 0) {
            last_num = tmp % 10;
            res = res * 10 + last_num;
            tmp /= 10;
        }

        return x == res;
    }
};