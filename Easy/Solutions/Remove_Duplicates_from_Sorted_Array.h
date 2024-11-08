#pragma once
#include <vector>

#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto new_end = std::unique(nums.begin(), nums.end());
        return new_end - nums.begin();
    }
};


