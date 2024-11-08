#include <vector>
#include <iostream>


#include "Solutions/Merge_Two_Sorted_Lists.h"

template <typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& v) {
	os << '[';
	for (size_t i = 0; i < v.size(); ++i) {
		os << v[i];
		if (i + 1 != v.size())
			os << ", ";
	}
	os << ']';
	return os;
}


int main() {
	Solution sol;
	//std::vector<int> v{2, 7, 11, 15};
	//std::string str = "MCMXCIV";
	ListNode* n1 = new ListNode{ 2 };
	ListNode* n2 = new ListNode{ 1 };
	std::cout << sol.mergeTwoLists(n1, n2) << std::endl;

	delete n1;
	delete n2;

	return 0;
}