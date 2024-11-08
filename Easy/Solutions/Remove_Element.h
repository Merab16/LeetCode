#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto new_end = std::remove_if(nums.begin(), nums.end(), 
            [&val](int num) {
                return num == val;
            }
        );
        return new_end - nums.begin();
    }
};