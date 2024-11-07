#pragma once
#include <string>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return {};

        int index = 0;
        char ch = strs.front()[index];

        while (index < strs.front().size()) {
            for (size_t i = 1; i < strs.size(); ++i) {
                if (ch != strs[i][index]) return strs.front().substr(0, index);
            }
            index++;
            ch = strs.front()[index];
        }
        return strs.front().substr(0, index);
    }
};