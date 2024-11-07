#pragma once
#include <string>

#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<std::string, int> nums{
            {"I", 1},
            {"IV", 4},
            {"V", 5 },
            {"IX", 9},
            {"X", 10},
            {"XL", 40},
            {"L", 50},
            {"XC", 90},
            {"C", 100},
            {"CD", 400},
            {"D", 500},
            {"CM", 900},
            {"M", 1000},
        };
        int res = 0;
        for (size_t i = 0; i < s.size(); ++i) {
            if (i + 1 != s.size()) {
                std::string tmp_s = s.substr(i, 2);
                if (nums.count(tmp_s)) {
                    res += nums[tmp_s];
                    ++i;
                    continue;
                }
            }
            res += nums[s.substr(i, 1)];
        }
        return res;
    }
};