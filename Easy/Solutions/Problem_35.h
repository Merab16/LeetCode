#pragma once
#include <vector>
#include <algorithm>


class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        auto it = std::lower_bound(nums.begin(), nums.end(), target);
        if (*it == target) {
            return it - nums.begin();
        } 
        return it - nums.begin();


    }
};