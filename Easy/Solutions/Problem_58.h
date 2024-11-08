#pragma once
#include <string>


class Solution {
public:
    int lengthOfLastWord(std::string s) {
        auto last_char = s.find_last_not_of(' ');
        auto last_space = s.find_last_of(' ', last_char);

        if (last_space != std::string::npos)
            return last_char - last_space;
        return last_char + 1;
    }
};


