#include <vector>
#include <iostream>


#include "Solutions/Problem_66.h"

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
	std::vector<int> v{ 9, 9, 9, 9 };
	//std::vector<int> v{2, 7, 11, 15};
	std::string str = " abcdsyfsg  sjfhsf ";
	std::string str1 = "cde";
	std::cout << sol.plusOne(v) << std::endl;


	return 0;
}