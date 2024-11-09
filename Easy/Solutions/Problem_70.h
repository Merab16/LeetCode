#pragma once

#include <cmath>

class Solution {
public:
    int climbStairs(int n) {
        double fi = (1 + std::pow(5, 0.5)) / 2;
        return (std::pow(fi, n + 1) - std::pow((1 - fi), n + 1)) / std::pow(5, 0.5);
    }
};

