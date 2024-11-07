#pragma once
#include <vector>
#include <unordered_map>



class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::unordered_map<int, int> m;

		for (int i = 0; i < nums.size(); ++i) {
			int desired = target - nums[i];

			if (m.count(desired)) {
				return { i, m[desired] };
			}
			m[nums[i]] = i;
		}

		return {};
	}
};