#pragma once
#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        bool plus = false;
            
        digits.back() += 1;
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            if (plus) {
                *it += 1;
                plus = false;
            }
            if (*it > 9) {
                plus = true;
                *it -= 10;
            }
        }

        if (plus) {
            std::vector<int> res{};
            res.reserve(digits.size() + 1);
            res.push_back(1);
            res.insert(res.begin(), digits.begin(), digits.end());
            return { res.rbegin(), res.rend() };
        }

        return digits;
    }
};
